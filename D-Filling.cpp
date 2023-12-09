#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrx[500][500];
    int counter = 1;
    
    for (int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                matrx[i][j] = counter++;
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                matrx[i][j] = counter++;
            }
        }
    }

    // Здесь ввод элементов матрицы
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrx[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}