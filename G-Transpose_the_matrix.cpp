#include <iostream>

using namespace std;

int main() {
    int n, m, i, j;
    cin >> n >> m;

    // limits for max matrix element
    int A_mtrx[100][100], B_mtrx[100][100];

    // Read/creating matrix A
    for (i = 0; i < n; ++i) { // preincrement for faster code
        for (j = 0; j < m; ++j) {
            cin >> A_mtrx[i][j];
        }
    }

    // Transposing matrix A to matrix B
    for ( i = 0; i < m; ++i) {
        for ( j = 0; j < n; ++j) {
            B_mtrx[i][j] = A_mtrx[j][i]; // по условию Let B be the transposed matrix A. Then B[ij] = A[ji].
        }
    }

    // Output
    for ( i = 0; i < m; ++i) {
        for ( j = 0; j < n; ++j) {
            cout << B_mtrx[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}