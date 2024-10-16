#include<bits/stdc++.h>
using namespace std ;

int main( ) {
    int t ;
    cin >> t ;
    while(t--) {
        int n ,x  ;
        cin >> n >> x ;
        vector<int> a ;
        for(int i = 0 ; i< n ; i++ ) {
            int temp ; 
            cin >> temp ; 
            if( temp <= x ) {
                a.push_back(temp) ;
            }
        }
        vector<int> pref(n) ;
        pref[0] = a[0] ;
        for(int i = 1 ; i < a.size() ; i++ ) {
            pref[i] = pref[i-1] + a[i] ;
        }
    
    }
}