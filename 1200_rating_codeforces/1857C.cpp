#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n ;
        cin >> n ; 

        vector<int> a;
        vector<int> b ;
        map<int, int> m ; 
        int size_b = (n*(n-1))/2 ; 
        for(int i =0 ;  i < size_b ; i++ ) {
            int x; 
            cin >>x ; 
            m[x]++ ; 
        }

        for(auto x : m) {
            a.push_back(x.first); 
            b.push_back(x.first); 
        }
        if(a.size() < n ) {
            for(int i=b.size()-1 ; i>=0 ; i--) {
                while(m[b[i]] >= 1 && a.size() < n ) {
                    
                    a.push_back(b[i]) ; 
                    m[b[i]]-- ; 
                }
                if(a.size() == n ) {
                    break ; 
                }
            }
        }
        for(auto x : a) {
            cout << x << " " ; 
        }
        cout << endl ;
    }
    return 0;
}