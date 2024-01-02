/*
Neamul Haq
University of Barisal
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define umap unordered_map<ll,ll>m;
#define map map<ll,ll>m;
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t=1; 
    while(t--) solve();
}

void solve(){
    ll n,k,s=0,ans=0; cin >> n >> k;

    vector<ll>a(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll i=0,j=0;
    while(j<n)
    {
        s+=a[j];
        if(s>k)
        {
            while(s>k)
            {
                s-=a[i];
                i++;
            }
        }

        if(s==k)
        {
            ans=max(ans,j-i+1);
        }
        j++;
    }
    cout << ans << ndl;

}