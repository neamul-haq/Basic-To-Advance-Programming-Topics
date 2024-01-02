#include<bits/stdc++.h>
using namespace std;
long long int C(long long int n,long long int r)
{
    if(r>n/2)
    {
        r=n-r;
    }
    long long ans=1;
    long long i;
    for(i=1; i<=r; i++)
    {
        ans*=n-r+i;
        ans/=i;
    }
    return ans;
}

int main()
{
    cout << C(20,8);
}
