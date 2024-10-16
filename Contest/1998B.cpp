#include<bits/stdc++.h>
using namespace std ;

int main() {
    int test ;
    cin >> test ;
    while(test--) {
        int n ; 
        cin >> n ; 
        vector<int> a(n) ;
        vector<int> ans(n) ; 

        for(int i = 0 ; i < n ; i++) {
            cin >> a[i] ;
        }
        
        for(int i = 0 ; i < n ; i++) {
            if(i == 0) {
                ans[i] = a[n - 1]; 
            } else {
                ans[i] = a[i - 1]; 
            }
        }

        for(auto &x : ans) {
            cout << x << " " ; 
        }
        cout << endl ; 
    }
}