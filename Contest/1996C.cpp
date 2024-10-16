#include <bits/stdc++.h>
using namespace std;

void process() {
    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        string s1, s2;
        cin >> s1 >> s2;

        vector<vector<int>> prefix_freq1(n + 1, vector<int>(26, 0));
        vector<vector<int>> prefix_freq2(n + 1, vector<int>(26, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                prefix_freq1[i + 1][j] = prefix_freq1[i][j];
                prefix_freq2[i + 1][j] = prefix_freq2[i][j];
            }
            prefix_freq1[i + 1][s1[i] - 'a']++;
            prefix_freq2[i + 1][s2[i] - 'a']++;
        }

        while (q--) {
            int x, y;
            cin >> x >> y;
            x--; y--; 
            int ops = 0;
            for (int i = 0; i < 26; i++) {
                int freq1 = prefix_freq1[y + 1][i] - prefix_freq1[x][i];
                int freq2 = prefix_freq2[y + 1][i] - prefix_freq2[x][i];
                ops += abs(freq1 - freq2);
            }

            cout << ops / 2 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    process();
    return 0;
}
