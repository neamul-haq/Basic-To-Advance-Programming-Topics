#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int const mod = 1e9 + 7;
ll power(ll base,ll n)
{
	ll result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=(result*base)%mod;
			n--;
		}
		else {
			base=(base*base)%mod;
			n/=2;
		}
	}
	return result%mod;
}
int main(){
    cout << power (5,3);
}
