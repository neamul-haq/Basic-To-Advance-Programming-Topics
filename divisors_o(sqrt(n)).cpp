#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> findDivisors(ll n) {
    vector<ll> divisors;

    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);

            // Avoid adding the same divisor twice for perfect squares
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    return divisors;
}

int main() {
    ll num;
    cout << "Enter a number: ";
    cin >> num;

    vector<ll> divisors = findDivisors(num);

    cout << "Divisors of " << num << " are: ";
    for (ll divisor : divisors) {
        std::cout << divisor << " ";
    }

    std::cout << std::endl;
    return 0;
}
