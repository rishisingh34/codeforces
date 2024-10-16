#include<bits/stdc++.h>
using namespace std ;

typedef long long ll ; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll test ;
    cin >> test ;
    while(test--) {
        ll n ;
        cin >> n ; 
        vector<ll> a(n); 
        vector<ll> b(n) ; 
        string ans = "Bob" ; 
        for(ll i = 0 ; i < n ; i++) {
            cin >> a[i] ; 
        }
        for(ll i = 0 ; i < n ; i++) {
            cin >> b[i] ; 
        }
        if(a==b) {
            cout << "Bob" << endl ; 
            continue ; 
        }

        vector<ll> c = b ;
        reverse(c.begin(), c.end()) ; 

        if( a== c ) {
            cout << "Bob" << endl ; 
            continue ; 
        }
        cout << "Alice" << endl ;
    }
}