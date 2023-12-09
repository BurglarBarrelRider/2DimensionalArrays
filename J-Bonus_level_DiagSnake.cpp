#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> snake(n, vector<int>(n));

    int counter = 1;
    for (int diag = 0; diag < 2 * n - 1; ++diag) {
        int startingRow = max(0, diag - n + 1);
        int endingRow = min(diag, n - 1);

        if (diag % 2 == 0) {
            for (int row = startingRow; row <= endingRow; ++row) {
                snake[row][diag - row] = counter++;
            }
        } else {
            for (int row = endingRow; row >= startingRow; --row) {
                snake[row][diag - row] = counter++;
            }
        }
    }

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            cout << snake[row][col] << ' ';
        }
        cout << endl;
    }

    return 0;
}