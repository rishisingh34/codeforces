#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int rows, cols;
        cin >> rows >> cols;
        vector<vector<int>> matrix(rows, vector<int>(cols));
        vector<int> flattened;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> matrix[i][j];
                flattened.push_back(matrix[i][j]);
            }
        }

        if ((rows * cols) == 1) {
            cout << -1 << endl;
            continue;
        }

        sort(flattened.begin(), flattened.end());
        vector<vector<int>> sortedMatrix(rows, vector<int>(cols));

        if (cols == 1) {
            for (int i = rows - 1; i >= 0; --i) {
                if (i == rows / 2 && rows % 2 != 0) {
                    cout << matrix[i - 1][0] << endl;
                } else if (i == (rows / 2) - 1 && rows % 2 != 0) {
                    cout << matrix[i + 1][0] << endl;
                } else {
                    cout << matrix[i][0] << endl;
                }
            }
        } else {
            for (int i = rows - 1; i >= 0; --i) {
                for (int j = cols - 1; j >= 0; --j) {
                    if (j == cols / 2 && cols % 2 != 0) {
                        cout << matrix[i][j - 1] << " ";
                    } else if (j == (cols / 2) - 1 && cols % 2 != 0) {
                        cout << matrix[i][j + 1] << " ";
                    } else {
                        cout << matrix[i][j] << " ";
                    }
                }
                cout << endl;
            }
        }
    }
}
