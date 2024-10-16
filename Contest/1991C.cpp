#include<bits/stdc++.h>
using namespace std;

int main() {
    int test ;
    cin >> test ; 
    while(test--) {
        int len ; 
        cin >> len ; 
        vector<int> a(len);
        bool zero = true  ; 
        for(int i = 0; i < len; i++) {
            cin >> a[i];
            if(a[i] > 0) {
                zero = false ; 
            }
        }
        if(zero) {
            cout << "0\n" << endl; 
            continue; 
        }
        if(len == 1) {
            cout << "1\n" << a[0] << endl; 
            continue; 
        }
        vector<int> ope; 
        int k = 40; 
        bool possible = true ; 
        while(k--) {
            int maxEl = INT_MIN ;
            bool zeroFlag = false ;  
            for(int i=0; i< len ; ++i ) {
                maxEl = max(maxEl, a[i]);
                if(a[i] == 0) {
                    zeroFlag = true; 
                } 
            }
            if(zeroFlag && maxEl == 1 ) {
                possible = false;
                break ; 
            }
            if(maxEl == 0) {
                break; 
            }
            for(int i = 0; i < len; i++) {
                if(maxEl == 1) {
                    a[i] = abs(a[i] - 1);
                }else {
                    a[i] =abs(a[i] - ( maxEl/2 ));
                }
            }
            if( maxEl == 1){
                ope.push_back(1);
            } else {
                ope.push_back(maxEl/2);
            }
        }  
        if(possible ) {
            cout << ope.size() << endl ; 
            for(auto x : ope) {
                cout << x << " "; 
            }
            cout << endl ; 
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
