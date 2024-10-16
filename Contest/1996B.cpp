#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> mat(n, vector<int>(n));
        
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < n; j++) {
                mat[i][j] = row[j] - '0'; 
            }
        }
        
        int sub_size = n / k;
        vector<vector<int>> sub(sub_size, vector<int>(sub_size));
        
        for (int i = 0; i < sub_size; i++) {
            for (int j = 0; j < sub_size; j++) {
                sub[i][j] = mat[i * k][j * k];
            }
        }

        for (int i = 0; i < sub_size; i++) {
            for (int j = 0; j < sub_size; j++) {
                cout << sub[i][j] ;
            }
            cout << endl;
        }
    }
    return 0;
}
