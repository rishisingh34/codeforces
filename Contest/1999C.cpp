#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main () {
    ll test ;
    cin >> test ;
    while(test--) {
        ll n , k ; 
        cin >> n >> k ;
        vector<ll> a(n) ;
        vector<ll> b(n) ; 
        map<ll,  ll> mp ; 
        for(ll i = 0 ; i < n ; i++) {
            cin >> a[i] ;
        }
        for(ll i = 0 ; i < n ; i++) {
            cin >> b[i] ;
            mp[a[i]] = b[i] ;
        }
        ll mi = n/2 ; 
        auto ite = mp.begin() ; 
        advance(ite, mi -1) ; 
        
        
    }

    return 0 ; 
}