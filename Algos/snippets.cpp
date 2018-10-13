//fast power recursive.... O(logn)
int power(int x, unsigned int y)
{
	int temp;
	if( y == 0)
		return 1;
	temp = power(x, y/2);
	if (y%2 == 0)
		return temp*temp;
	else
		return x*temp*temp;
}
//fast power non-recursive
long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}




//GCD non recursive
ll GCD(ll a,ll b)
{
    ll c=a%b;
    while(c!=0)
    {
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}
//GCD recursive
int gcd(int m, int n) {
         
    if(m < n)
        swap(m, n);
    
    if(n == 0)
       return m;

    return gcd(m % n, n);
  }










