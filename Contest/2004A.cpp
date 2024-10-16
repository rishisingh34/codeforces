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
#define each(a, x) for(const auto& a : x)

void solve() {
    ll pt ; 
    cin >> pt ;
    vll a(pt) ;
    rep(i, 0 , pt ) { cin >> a[i] ; } 

    if ( pt > 2 ) {
        cout << "NO" << endl ; 
        return  ; 
    } 

    if(abs(a[1] -a[0]) > 1 ) {
        cout << "YES" << endl ;
    } else {
        cout << "NO" << endl ; 
    }


    return ; 


}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    ll t ;
    cin >> t; 
    while(t--)  { solve() ; } 
}