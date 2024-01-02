ll i, n, m, k, j, s = 0, x = 0; cin >> n;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
       cin >> a[i];
    }

    ll curr=0, ans=LLONG_MIN;
    for(int i=0; i<n; i++){
        if(i>0 && (abs(a[i-1]%2) == abs(a[i]%2))){
            curr=a[i];
            ans=max(ans,curr);
        }
        else{
            curr = max(a[i],curr+a[i]);
            ans=max(ans,curr);
        }
    }
    cout << ans <<  ndl;
