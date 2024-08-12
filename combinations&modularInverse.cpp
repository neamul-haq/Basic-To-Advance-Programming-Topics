#include<bits/stdc++.h>
using namespace std;
int cs=0;
const int MAX = 1000000;
const long long int mod = 1000003;  // Precompute up to 20!
long long factorials[MAX + 1];

void precomputeFactorials() {
    factorials[0] = 1;
    for (int i = 1; i <= MAX; ++i) {
        factorials[i] = (factorials[i - 1] * i)%mod;
        factorials[i]%=mod;
    }
}
 long long C( long long n, long long r)
{
     long long a = factorials[n];
     long long b = factorials[r];
     long long ans=((a%mod) * (pow(b,mod-2)%mod))%mod;
    ans%=mod;
    a = ans;
    b = factorials[n-r];
    ans=((a%mod) * (pow(b,mod-2)%mod))%mod;
    ans%=mod;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    precomputeFactorials();
    while(t--){
         long long n,r;
        cin >> n >> r;
        cout << "Case " << ++cs << ": " << C(n,r) << '\n';
    }
}
