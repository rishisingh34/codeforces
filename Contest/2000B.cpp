#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    vector<bool> occupied(n + 1, false);  
    
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    occupied[a[0]] = true; 
    for(ll i = 1; i < n; i++) {
        if (!occupied[a[i] - 1] && !occupied[a[i] + 1]) {
            cout << "NO" << endl;
            return;
        }
        occupied[a[i]] = true;
    }
    cout << "YES" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
