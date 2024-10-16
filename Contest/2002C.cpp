#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll intSqrt(ll x) {
    ll left = 0, right = x, result = 0;
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (mid * mid <= x) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

ll dist(pair<ll, ll> p1, pair<ll, ll> p2) {
    return intSqrt((p1.first - p2.first) * (p1.first - p2.first) + 
                   (p1.second - p2.second) * (p1.second - p2.second));
}

string isPath(vector<pair<ll, ll>>& a, ll xs, ll ys, ll xt, ll yt) {
    ll d_start_target = dist({xs, ys}, {xt, yt});

    for (const auto& circle : a) {
        ll d_start_circle = dist({xs, ys}, circle);
        ll d_target_circle = dist({xt, yt}, circle);
        if (d_start_circle + d_target_circle <= d_start_target) {
            return "NO";
        }
    }   

    return "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll test;
    cin >> test;
    while (test--) {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
        }

        ll xs, ys, xt, yt;
        cin >> xs >> ys >> xt >> yt;

        cout << isPath(a, xs, ys, xt, yt) << endl;
    }

    return 0;
}
