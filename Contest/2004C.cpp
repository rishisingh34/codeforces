#include <bits/stdc++.h>
using namespace std;

typedef long long ll;   
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;

#define pb push_back
#define mp make_pair
#define fi first 
#define se second
#define all(x) x.begin(), x.end()

#define rep(i, a, b) for (ll i = a; i < b; i++)
#define per(i, a, b) for (ll i = a; i >= b; i--)
#define each(a, x) for (auto& a : x)

void solve() {
    ll n, k;
    cin >> n >> k;
    vll a(n);
    rep(i, 0, n) {
        cin >> a[i];
    }
    
    sort(all(a), greater<ll>());

    for (ll i = 1; i < n; i += 2) {
        ll difference = a[i-1] - a[i];
        if (difference <= k) {
            k -= difference;
            a[i] = a[i-1];  
        } else {
            a[i] += k;
            k = 0;
            break;
        }
    }

    ll as= 0, bs = 0;
    for (ll i = 0; i < n; i += 2) as += a[i];
    for (ll i = 1; i < n; i += 2) bs  += a[i];

    cout << as - bs<< endl;
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
}
