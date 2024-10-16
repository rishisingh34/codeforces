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
    int a ;
    cin >>a ;
    string str  = to_string(a) ;
    if( str[0] == '1' && str[1] == '0' && str.size() >= 3 ) {
        if( str[2] == '0' || (str[2] =='1' && str.size() == 3) ) {
            cout << "NO" << endl;
            return ; 
        }
        cout << "YES" << endl ; 
        return ; 
    }
    cout << "NO"<<endl; 
    return ; 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    ll t ;
    cin >> t; 
    while(t--)  { solve() ; } 
}