#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> grid(2);
    for (int i = 0; i < 2; ++i) {
        cin >> grid[i];
    }

    int left = -1, right = -1;
    for (int i = 0; i < n; ++i) {
        if (grid[0][i] != 'x' || grid[1][i] != 'x') {
            left = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (grid[0][i] != 'x' || grid[1][i] != 'x') {
            right = i;
            break;
        }
    }

    if (left == -1 || right == -1 || left == right) {
        cout << 0 << endl;
        return;
    }

    int count = 0;
    for (int i = left + 1; i < right; ++i) {
        if (i == 0 || i == n - 1) continue;

        int cnt1 = (grid[0][i] == '.') * ((grid[0][i + 1] == 'x') + (grid[0][i - 1] == 'x') + (grid[1][i] == 'x'));
        int cnt2 = (grid[1][i] == '.') * ((grid[1][i + 1] == 'x') + (grid[1][i - 1] == 'x') + (grid[0][i] == 'x'));

        count += (cnt1 == 2) + (cnt2 == 2);
    }

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) solve();
    return 0;
}
