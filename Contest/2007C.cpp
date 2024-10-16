#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> c(n);
        int min_val = 1e9, max_val = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> c[i];
            min_val = min(min_val, c[i]);
            max_val = max(max_val, c[i]);
        }
        
        int d = max_val - min_val;
        if (a == b) {
            
            cout << d % a << endl;
        } else {
            
            int g = gcd(a, b);
            cout << d % g << endl;
        }
    }
    return 0;
}
