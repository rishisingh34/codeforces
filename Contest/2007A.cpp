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
    ll left, right ;
    cin >> left >> right;

    left= (left %2 == 0) ? left + 1 : left;

    ll range = right - left + 1;
    ll fg = range/ 4 ;
    ll ec = (range%4==3 ) ? 1 : 0 ; 

    ll result = fg + ec ;
    cout << result << endl;
    return ; 


}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    ll t;
    cin >> t; 
    while(t--)  { solve(); } 
}
