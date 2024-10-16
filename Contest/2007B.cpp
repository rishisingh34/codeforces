#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int current_max = *max_element(a.begin(), a.end());
        vector<int> max_after_each_operation;

        while (m--) {
            char op;
            int l, r;
            cin >> op >> l >> r;

            if (l <= current_max && current_max <= r) {
                if (op == '+') {
                    current_max++;
                } else if (op == '-') {
                    current_max--;
                }
            }

            max_after_each_operation.push_back(current_max);
        }

        for (int value : max_after_each_operation) {
            cout << value << ' ';
        }
        cout << '\n';
    }

    return 0;
}
