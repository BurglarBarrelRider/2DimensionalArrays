#include <iostream>
using namespace std;

bool isEvenNegative(int num) {
    return (num < 0 && num % 2 == 0);
}

int main() {
    int n;
    cin >> n;
    int counter = 0; // num of negative numbers
    int matrx[500][500];
    

    // Здесь ввод элементов матрицы
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrx[i][j];
        }
    }
    
    int d1agon = 0;
    int dia2on = 0;
    
    for (int i = 0; i < n; ++i) {
        d1agon += matrx[i][i];
        dia2on += matrx[i][n-1-i];
    }
    
    cout << d1agon << " " << dia2on;
    
    return 0;
}
