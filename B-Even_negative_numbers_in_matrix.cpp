#include <iostream>
using namespace std;

bool isEvenNegative(int num) {
    return (num < 0 && num % 2 == 0);
}

int main() {
    int n;
    cin >> n;
    
    int counter = 0; // num of negative numbers
    int sumOfEvenNegatives = 0;
    int matrx[100][100];

    // Здесь ввод элементов матрицы
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrx[i][j];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(isEvenNegative(matrx[i][j])){
                counter++;
                sumOfEvenNegatives += matrx[i][j];
            }
        }
    }
    
    cout << counter << " " << sumOfEvenNegatives;
    
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     int counter = 0; // num of negative numbers
//     int sumOfEvenNegatives = 0;
//     int matrx[100][100];

//     // Здесь ввод элементов матрицы
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cin >> matrx[i][j];
//             if(matrx[i][j] < 0 && matrx[i][j] % 2 == 0){
//                 counter++;
//                 sumOfEvenNegatives += matrx[i][j];
//             }
//         }
//     }

//     cout << counter << " " << sumOfEvenNegatives;
    
//     return 0;
// }