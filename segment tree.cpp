//given initial input[] = { -1, 0, 3, 6}
#include<bits/stdc++.h>
using namespace std;

void build(int tree[], int input[], int low, int high, int pos)
{
	if(low==high)
	{
		tree[pos] = input[low];
		return;
	}
	int mid=(low+high)/2;
	build(tree, input, low, mid, 2*pos+1);
	build(tree, input, mid+1, high, 2*pos+2);
	tree[pos] = min(tree[2*pos+1],tree[2*pos+2]);
}

int query(int tree[],int qlow, int qhigh, int low, int high, int pos)
{
	if(low>=qlow && high<=qhigh)
		return tree[pos];
	else if(high<qlow || low>qhigh)
		return INT_MAX;
	else
	{	int mid=(low+high)/2;
		return min(query(tree,qlow,qhigh,low,mid,2*pos+1),
					query(tree,qlow,qhigh,mid+1,high,2*pos+2));
	}
}

void updateSegmentTreeRangeLazy(int tree[],int lazy[], int startRange, int endRange,
									int delta, int low, int high, int pos) 
{
        if(low > high) 
        {
            return;
        }
        //make sure all propagation is done at pos. If not update tree
        //at pos and mark its children for lazy propagation.
        if (lazy[pos] != 0) 
        {
            tree[pos] += lazy[pos];
            if (low != high) //not a leaf node
            { 
                lazy[2 * pos + 1] += lazy[pos];
                lazy[2 * pos + 2] += lazy[pos];
            }
            lazy[pos] = 0;
        }

        //no overlap condition
        if(startRange > high || endRange < low)
        {
            return;
        }

        //total overlap condition
        if(startRange <= low && endRange >= high) 
        {
            tree[pos] += delta;
            if(low != high) {
                lazy[2*pos + 1] += delta;
                lazy[2*pos + 2] += delta;
            }
            return;
        }

        //otherwise partial overlap so look both left and right.
        int mid = (low + high)/2;
        updateSegmentTreeRangeLazy(tree, lazy, startRange, endRange,
                delta, low, mid, 2*pos+1);
        updateSegmentTreeRangeLazy(tree, lazy, startRange, endRange,
                delta, mid+1, high, 2*pos+2);
        tree[pos] = min(tree[2*pos + 1], tree[2*pos + 2]);

}
int main()
{
	return 0;
}