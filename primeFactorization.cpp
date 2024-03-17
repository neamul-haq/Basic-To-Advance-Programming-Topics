#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000000

using namespace std;

using ll = long long;

vector<int> primes;
vector<int>List;
void sieve() {
    bool isPrime[MAX];
    for (int i = 0; i < MAX; ++i) isPrime[i] = true;
    for (int i = 3; i * i <= MAX; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i < MAX; i += 2) {
        if (isPrime[i]) primes.push_back(i);
    }
}

void primeFactorize(int n){//O(log n)
    sieve();
    for(int i=0; primes[i]*primes[i]<=n; i++){
        if(n%primes[i]==0){
            while(n%primes[i]==0){
                n/=primes[i];
                List.push_back(primes[i]);
            }
        }
    }
    if(n>1){
        List.push_back(n);
    }
}


int main() {
    int t=100;
    while(t--){
        int n;
    cin >> n;
    primeFactorize(n);
    cout<< primes.size();
    for(auto u:List){
        cout << u << " ";
    }
    }
}
