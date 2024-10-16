#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while(t-- ) {
        int n ; 
        cin >> n  ;
        string s ;
        cin >> s ;
        string t ;
        cin >> t ; 
        bool flag = false ; 
        string ans = "YES" ;
        for(int i = 0 ; i < n ; i++ ) {
            if( s[i] == '1'  ){
                flag = true ; 
            }
            if( s[i] == '0'  && t[i] == '1'  && flag == false ) {   
                ans = "NO" ; 
                break ; 
            }
        }   
        cout << ans << endl ;
    }
}