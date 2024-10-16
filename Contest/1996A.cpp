#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int leg ;
        cin >> leg ;

        if( leg % 4 !=0) {
            cout << (leg / 4 )+ 1 << endl ;
        } else {
            cout << leg / 4 << endl ;
        }
    }
}