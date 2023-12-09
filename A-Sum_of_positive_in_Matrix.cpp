#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrx[n][n];

    // Здесь ввод элементов матрицы
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrx[i][j];
        }
    }

    int summ = 0;

    // Тут ищем сумму
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrx[i][j] > 0) {
                summ += matrx[i][j];
            }
        }
    }

    cout << summ;

    return 0;
}
