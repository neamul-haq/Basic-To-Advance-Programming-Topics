#include <bits/stdc++.h>

using namespace std;
#define M 1000000
bool marked[M];
typedef long long int ll;
vector<int> primes;

bool isPrime(int n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    return marked[n] == false;
}

void sieve(int n)
{
    for (int i = 3; i * i <= n; i += 2)
    {
        if (marked[i] == false)   // i is a prime
        {
            for (int j = i * i; j <= n; j += i + i)
            {
                marked[j] = true;
            }
        }
    }

    primes.push_back(2);
    for(int i = 3; i <= n + 1; i += 2)
    {
        if(isPrime(i))
        {
            primes.push_back((int) i);
        }
    }

}

int countDivisor1(int n)//tc:O(sqrt(n))
{
    int divisor = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            divisor += 1;
        }
        else if (n % i == 0)
        {
            divisor += 2;
        }
    }
    return divisor;
}

int countDivisor2(int n)// O(log n)
{
    if (n < 1) return 0;
    int sqrn = (int) sqrt(n);
    sieve(n+1);
    int divisor = 1;
    for (int i = 0; primes[i]*primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {
            int cnt = 1;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    if (n > 1) divisor *= 2;
    return divisor;
}
//countDivisor 2 and 3 is same just int and long long
ll countDivisor3(ll n)
{
    if (n < 1) return 0;
    ll sqrn = (ll) sqrt(n);
    sieve(n+1);
    ll divisor = 1;
    for (ll i = 0; primes[i]*primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {
            ll cnt = 1;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    if (n > 1) divisor *= 2;
    return divisor;
}


int divisorSum1(int n)//TC:O(sqrt(n))
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            cnt += 2*n;
        }
        else if (n % i == 0)
        {
            cnt += (i + n/i);
        }
    }
    return cnt;
}

int divisorSum2(int n)
{
    if (n < 1) return 0;
    sieve(n+1);
    int sum = 1;
    for (int i = 0; primes[i]*primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {
            int cnt = 1;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            sum *= (pow(primes[i], cnt) - 1) / (primes[i] - 1);
        }
    }
    if (n > 1) sum *= (pow(n, 2) - 1) / (n - 1);
    /*
     * this is just a formula of a series (1 + p + p^2 + ... + p^n)
     * = ((p^(n+1)) - 1)/(p-1)
     */
    return sum;
}



int main()
{
    //sieve(100);
    ll g=1000000;
    cout << countDivisor3(g);
}

