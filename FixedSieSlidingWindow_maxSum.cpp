#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int i=0, j=0,sum=0,mx=INT_MIN;

    while(j<n)
    {
        sum+=a[j];
        if(j<k-1)
        {
            j++;
        }
        else{
            mx=max(sum,mx);
            sum-=a[i];
            i++;
            j++;
        }
    }
    cout << mx << "\n";
}
