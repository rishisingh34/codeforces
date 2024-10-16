#include<bits/stdc++.h>
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

#define rep(i, a, b) for(ll i = a; i < b; i++)
#define per(i, a, b) for(ll i = a; i >= b; i--)
#define each(a, x) for(auto& a : x)

void solve() {
    ll len; 
    cin >> len;
    vll a(len);
    map<ll, ll> freq;
    
    rep(i, 0, len) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    sort(all(a), greater<ll>());
    
    ll cnt = len - 1;
    ll sum = 0;
    
    rep(i, 0, len) {
        if (i != 0 && a[i] == a[i-1]) continue;
        sum += 2 * freq[a[i]];
        if (sum > cnt) {
            cout << a[i] << endl;
            return;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    ll t;
    cin >> t; 
    while(t--)  { solve(); } 
}
