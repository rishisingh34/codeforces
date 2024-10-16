#include <bits/stdc++.h>
using namespace std;

int findCommonSum(int a[], int n) {
    int s = accumulate(a, a + n, 0), l = 0;
    for (int i = 0; i < n; i++) {
        int r = s - l - a[i];
        if (l == r) return l;
        l += a[i];
    }
    return -1;
}

int findPositionToSplit(int a[], int n) {
    int s = accumulate(a, a + n, 0), l = 0;
    for (int i = 0; i < n; i++) {
        int r = s - l - a[i];
        if (l == r) return i;
        l += a[i];
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int pos = findPositionToSplit(a, n);
    cout << a[pos] << " " << findCommonSum(a, n) ;

    return 0;
}
