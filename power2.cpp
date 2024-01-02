long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);//b/2 = b>>1
    if (b % 2)//b&1 = b%2
        return res * res * a;
    else
        return res * res;
}


long long binpow(long long a, long long b, long long m) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2, m);//b/2 = b>>1
    if (b % 2)//b&1 = b%2
        return (res%m * res%m * a)%m;
    else
        return (res%m * res%m )%m;
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
