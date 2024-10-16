#include<bits/stdc++.h>
using namespace std ;

int main() {
    int test ;
    cin >> test ;
    while(test-- ){
        int len ; 
        cin >> len ; 
        vector<int> a(len, 0) ;
        vector<int> odd; 
        for(int i = 0 ; i < len ; i++) {
            cin >> a[i] ;
            if((i+1)%2 == 1 ) {
                odd.push_back(a[i]) ;
            }
        }
        int maxElem = 0; 
        for(int i = 0 ; i < odd.size() ; i++) {
            maxElem = max(maxElem, odd[i]) ;    
        }

        cout << maxElem << endl ;
    }
}