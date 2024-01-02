/*
AUTHOR: Neyamul_Haq
CREATED: 05-08-2023  18:29:12
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define ump unordered_map<int,int>mp;
#define mp map<int,int>mp;
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
    ll n,q,ans=0; cin >> n >>q;
    vector<ll>a(n);
    vector<ll>b(n+2);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    while(q--)
    {
        ll x,y;
        cin >> x >> y;
        b[x]++;
        b[y+1]--;
    }
    // for(auto u:a){
    //     cout << u << " ";
    // }
    for(int i=1; i<n+2; i++)
    {
        b[i]+=b[i-1];
    }


}
