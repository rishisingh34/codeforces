#include<bits/stdc++.h> 
using namespace std ;

int main() {
    int test ;
    cin >> test ;
    while(test--) {
        int x, y, k ; 
        cin >> x >> y >> k ;
        vector<pair<int, int>> ans ; 

        if(k % 2 == 0) {
            for(int i = 1; i <= k; i++) {
                if(i > k/2) {
                    ans.push_back(make_pair(x + i - k/2, y + i - k/2)); 
                } else {
                    ans.push_back(make_pair(x - (k/2 - i + 1), y - (k/2 - i + 1))); 
                }
            }
        } else {
            ans.push_back(make_pair(x, y)); 
            for(int i = 1; i <= (k-1)/2; i++) {
                ans.push_back(make_pair(x + i, y + i));
                ans.push_back(make_pair(x - i, y - i));
            }
        }

        for(auto &p : ans) {
            cout << p.first << " " << p.second << endl ; 
        }
    }
    return 0 ; 
}
