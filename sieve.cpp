#include<bits/stdc++.h>
using namespace std;

const int maxx=1e6;
bool prime[maxx];


/*Eta best
#define M 1000000
bool marked[M];

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}

void sieve(int n) {
  for (int i = 3; i * i <= n; i += 2) {
    if (marked[i] == false) { // i is a prime
      for (int j = i * i; j <= n; j += i + i) {
        marked[j] = true;
      }
    }
  }
}
*/

void sieve()
{
    prime[1]=false;
    for(int i=2; i<=maxx; i++)
    {
        prime[i]=true;
    }
    for(int i=2; i*i<=maxx; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=maxx; j+=i){
                prime[j]=false;
            }
        }
    }
}

int main()
{
    sieve();
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        cout << prime[n] << endl;
    }
}
