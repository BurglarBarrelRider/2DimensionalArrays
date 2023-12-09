#include <iostream>
using namespace std;

int main() {
    int na, ma, nb, mb;
    cin >> na >> ma; // na : ma

    int A[100][100];
    for (int i = 0; i < na; ++i) {
        for (int j = 0; j < ma; ++j) {
            cin >> A[i][j];
        }
    }

    cin >> nb >> mb; // nb : mb

    int B[100][100];
    for (int i = 0; i < nb; ++i) {
        for (int j = 0; j < mb; ++j) {
            cin >> B[i][j];
        }
    }

    if (ma != nb) {
        cout << "-1" << endl;
    } else {
        int C[100][100];
        for (int row = 0; row < na; ++row) {
            for (int column = 0; column < mb; ++column) {
                int product = 0;
                for (int inner = 0; inner < ma; ++inner) {
                    product += A[row][inner] * B[inner][column];  // formula Cij = Air * Brj
                }
                C[row][column] = product;
            }
        }
        
        // Output
        cout << na << " " << mb << endl;
        for (int i = 0; i < na; ++i) {
            for (int j = 0; j < mb; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}