//
//  try.cpp
//  stl
//
//  Created by Satya Sanjay Nath on 01/11/16.
//  Copyright © 2016 Satya Sanjay Nath. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>& v)
{
    vector<int> :: iterator it;
    for(it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(int argc, const char * argv[])
{
    
    vector<int> v;
   
    v.push_back(5);
    v.push_back(2);
    v.push_back(7);
    v.push_back(4);
    v.push_back(5);
    
    cout <<"Vector"<<endl;
    print(v);
    
    
    int x;
    //cin>>x;
    //cout<<"entered"<<x<<"\n";
    
    cout<<"Reversed"<<endl;
    reverse(v.begin()+1,v.end()-1);
    print(v);
    
    
    cout<<"deleted"<<endl;
    v.erase(v.begin()+2);
    print(v);
    
    cout<<"inserted"<<endl;
    v.insert(v.begin()+2,9);
    print(v);
    
    cout<<"sorted"<<endl;
    sort(v.begin()+1,v.end()-1);
    print(v);
    
    
    cout<<endl;
    return 0;
}
