#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define rep(i, a, b) for(ll i = a; i < b; i++)

template <typename T>
string canonical(const vector<T>& arr) {
    unordered_map<T, ll> pos_map;
    string form;
    ll next_pos = 0;

    for (ll i = 0; i < arr.size(); ++i) {
        if (pos_map.find(arr[i]) == pos_map.end()) {
            pos_map[arr[i]] = next_pos++;
        }
        form += to_string(pos_map[arr[i]]) + ",";
    }
    return form;
}

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    rep(i, 0, n) {
        cin >> a[i];
    }

    string a_form = canonical(a);

    ll m;
    cin >> m;
    vector<string> b(m);
    rep(i, 0, m) {
        cin >> b[i];
    }

    rep(i, 0, m) {
        if (a.size() == b[i].size()) {
            vector<char> b_vec(b[i].begin(), b[i].end());
            string b_form = canonical(b_vec);
            if (a_form == b_form) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
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
