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
#define each(x, a) for (auto &x : a)

void solve() {
    ll n;
    cin >> n;
    vll w(n), h(n);
    rep(i, 0, n) {
        ll a, b;
        cin >> a >> b;
        w[i] = a;
        h[i] = b;
    }
    sort(all(w), greater<ll>());
    sort(all(h), greater<ll>());
    cout << 2 * (w[0] + h[0]) << endl;
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
