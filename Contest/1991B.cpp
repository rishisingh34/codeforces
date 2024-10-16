#include <bits/stdc++.h>
using namespace std;

int main() {
    int test ;
    cin >> test ;  
    while (test--) {
        int len; 
        cin >> len; 
        vector<int> a(len);
        vector<int> b(len - 1); 

        for (int i = 0; i < len - 1; i++) {
            cin >> b[i];
        }

        a[0] = b[0]; 
        bool flag = true; 

        for (int i = 1; i < len; i++) {
            a[i] = b[i-1] ; 
            if( i < len - 1) {
                a[i] |= b[i]; 
            }
            if( (a[i] & a[i-1] )!= b[i-1]) {
                flag = false; 
                break; 
            }
            
        }   

        if (flag) {
            for (auto x : a) {
                cout << x << " ";  
            }
            cout << endl; 
        } else {
            cout << -1 << endl; 
        }
    }
    return 0;
}
