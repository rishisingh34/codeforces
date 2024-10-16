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
    ll len ;
    cin >> len ;
    vll a(len) ;
    rep(i, 0, len) {
        cin >> a[i] ;
    }
    string s ;
    cin >>s  ;
    ll left= 0, right = len-1 ;
    bool flag =false; 
    
    vll prefix_sum(len + 1, 0);
    rep(i, 0, len) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }
    
    ll sum = 0 ; 
    while(left < right) {
        if( s[left] == 'L' && s[right] == 'R'){
            sum += prefix_sum[right + 1] - prefix_sum[left];
            left++; 
            right--;
            flag = true ; 
        } 
        if( s[left] == 'R') {
            left++; 
        }  
        if( s[right] == 'L'){
            right--; 
        }
    }
    if(flag){
        cout << sum << endl ;
    }else {
        cout << 0  << endl ; 
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