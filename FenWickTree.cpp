#include<bits/stdc++.h>
using namespace std;

//Sum
struct FenwickTree {
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }
    FenwickTree(vector<int> a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }
    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};

//minimum
struct FenwickTreeMin {
    vector<int> bit;
    int n;
    const int INF = (int)1e9;

    FenwickTreeMin(int n) {
        this->n = n;
        bit.assign(n, INF);
    }

    FenwickTreeMin(vector<int> a) : FenwickTreeMin(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            update(i, a[i]);
    }

    int getmin(int r) {
        int ret = INF;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret = min(ret, bit[r]);
        return ret;
    }

    void update(int idx, int val) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] = min(bit[idx], val);
    }
};

int main() {
    // Your cpp code here
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    for(int i=1; i<=t; i++){
        cout << "Case " << i << ":\n";
        int n,q;
        cin >> n>>q;
        vector<int>a(n);
        FenwickTree ft(n+1);
        for(int i=0; i<n; i++){
            cin >> a[i];
            ft.add(i,a[i]);
        }
        while(q--){
            int typ;
            cin >> typ;
            if(typ==1){
                int idx; cin >>idx;
                cout << a[idx] << endl;
                ft.add(idx,-a[idx]);
                a[idx]=0;
            }
            else if(typ==2){
                int idx,v;
                cin >> idx >> v;
                a[idx]+=v;
                ft.add(idx,v);
            }
            else{
                int i,j;
                cin >> i >>j;
                cout << ft.sum(i,j) << endl;
            }
        }
    }
    return 0;
}


