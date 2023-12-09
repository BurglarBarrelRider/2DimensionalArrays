#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int prices[500][500];
    int sold[500][500];
    int sum = 0;

    // Здесь ввод элементов матрицы
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> prices[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> sold[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum = sum + prices[i][j] * sold[i][j];
        }
    }
    cout << sum;
    return 0;
}