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
    vll arr(n);
    rep(i, 0, n) cin >> arr[i];
    
    ll minOps = LLONG_MAX;
    rep(i, 0, n) {
        ll curr = arr[i];
        ll ops = 0;
        priority_queue<ll, vector<ll>, greater<ll>> pq;

        rep(j, 0, i) {
            if (pq.empty() || pq.top() > arr[j]) {
                pq.push(arr[j]);
            }
        }

        if (!pq.empty()) {
            if (pq.top() < arr[i]) {
                ops += i;
            } else {
                ops += (i - pq.size());
            }
        }

        rep(k, i + 1, n) {
            if (arr[k] > curr) ops++;
        }

        minOps = min(minOps, ops);
    }

    cout << minOps << endl;
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
