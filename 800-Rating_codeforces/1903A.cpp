#include<bits/stdc++.h> 
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while(t-- ) {
        int n , k ;
        cin >> n >> k ; 
        int a[n] ;
        int isSorted = 1 ; 
        int isReverseSorted = 1 ;
        for(int i = 0 ; i < n ; i++ ) {
            if(i == 0 ) {
                cin >> a[i] ;
            } else {
                cin >> a[i] ;
                if(a[i] <  a[i-1] ) {
                    isSorted = 0 ;
                }
            }
        }
        if( isSorted == 1 ) {
            cout << "YES" << endl ; 
        }   else {
            if ( k <= n && k > 1 ) {
                cout << "YES" << endl ; 
                continue ; 
            }
            cout << "NO" << endl ;

        }
    }
    return 0 ; 

}