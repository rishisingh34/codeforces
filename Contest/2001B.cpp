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

    if (len % 2 == 0) {
        cout << -1 << endl;
        return;
    }

    vll res;
    
    for (ll i = len - 1; i >= 2; i -= 2) {
        res.pb(i);
    }
    
    for (ll i = 1; i <= len; i += 2) {
        res.pb(i);
    }
    
    for (const auto& x : res) {
        cout << x << " "; 
    }
    
    cout << endl; 
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    ll t ;
    cin >> t; 
    while(t--)  { solve() ; } 
}