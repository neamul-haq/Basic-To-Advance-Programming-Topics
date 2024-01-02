#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b, long long m) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2, m);//b/2 = b>>1
    if (b % 2)//b&1 = b%2
        return (res%m * res%m * a)%m;
    else
        return (res%m * res%m )%m;
}
int main(){
    long long a, b, m, big , ans;
    cin >> a >> b >> m;
    big = binpow(b, m-2, m);
     ans = ((a%m) * big ) % m ;
     cout << ans << endl;
    return 0;
}
