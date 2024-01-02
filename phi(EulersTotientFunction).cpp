#include<bits/stdc++.h>
using  namespace  std;
//Here is two implementation using factorization in TC:O(sqrt(n))
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
void phi(int n)
{
    int ans=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                n/=i;
                cnt++;
            }
            //cout<<i<<"^"<<cnt<<endl;
            ans*=(i-1);
            ans/=i;
        }
    }
    if(n>1)
    {
        //cout<<n<<"^"<<1<<endl;
        ans*=n-1;
        ans/=n;
    }
    cout<<ans<<'\n';
}

//Euler totient function from 1 to n(sieve approach). TC:O(nloglogn)
void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

int main()
{
    while(1){
        int n;
        cin>>n;
        phi(n);
    }
}






