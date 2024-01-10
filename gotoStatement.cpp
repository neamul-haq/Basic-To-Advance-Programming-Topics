#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
 
int main()
{
	
	ll t;
	cin>>t;
 
	read:
	while(t--){
		ll n;
		cin>>n;
 
		ll a[n],b[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		ll m=b[0];
 
		for(ll i=0;i<n;i++){
			if(a[i]!=b[i] && (__gcd(a[i],m)!=m || __gcd(b[i],m)!=m)){
				cout<<"NO"<<endl;
				goto read;
			}
		}
		cout<<"YES"<<endl;
	}
 
	return 0;
}