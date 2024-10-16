#include <bits/stdc++.h>
using namespace std;

int lcm (int a, int b) {
    return a*b/__gcd(a,b);
}

int main() {
    long long  t;
    cin >> t;
    while (t--) {
        long long  n, x, y;
        cin >> n >> x >> y; 

        long long cp = n / x ; 
        long long cn = n / y ; 
        long long cpn = n / lcm(x,y ) ;

        cp = cp - cpn ;
        cn = cn - cpn ;

        long long total =(n*(n+1))/2 ; 
        long long neg = (cn*(cn+1))/2 ; 
        long long pos = total - ((n-cp)*(n-cp+1))/2 ;
        cout << pos - neg << endl;
    }
    return 0;
}
