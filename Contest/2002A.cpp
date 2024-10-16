#include<bits/stdc++.h>
using namespace std ;

typedef long long ll ; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll test ;
    cin >> test ;
    while(test--) {
        ll n, m ,k ;
        cin >> n >> m >> k ;
        
        if( m > k) {
            if( n > k) {
                cout << k*k << endl ; 
            } else {
                cout << k*n  << endl ; 
            }
        }else {
            if( n > k) {
                cout << k*m << endl ; 
            } else {
                cout << n*m << endl ; 
            }
        }

    }
    return 0 ; 
}