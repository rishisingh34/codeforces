#include<bits/stdc++.h>
using namespace std ; 

int main() {
    int test  ;
    cin >> test ; 
    while(test--) {
        string s ; 
        cin >> s ;
        string ans; 
        bool inserted = false; 
        for(int i =0 ; i < s.size() ; i++) {
            if( i > 0 && s[i] == s[i-1] && !inserted ) {
                if( s[i] == 'a') {
                    ans.push_back('b') ;
                } else {
                    ans.push_back('a'); 
                }
                inserted = true; 
            }
            ans.push_back(s[i]);
        }
        if(inserted ) {
            cout << ans << endl;
        } else {
            if(ans[0] == 'a') {
                ans = "b" + ans; 
            } else {
                ans = "a" + ans;
            }
            cout << ans << endl; 
        }
        
    }
    return 0 ;
}