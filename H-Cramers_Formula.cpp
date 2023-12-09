#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1; // (a1x + b1y = c1)
    cin >> a2 >> b2 >> c2; // (a2x + b2y = c2)

    double determinant = a1 * b2 - a2 * b1; // так как крест накрест 

    // Check if determinant is not zero to ensure a unique solution exists
    if (determinant != 0) {
        double x = (c1 * b2 - c2 * b1) / determinant;
        double y = (a1 * c2 - a2 * c1) / determinant;

        cout << fixed << setprecision(3) << x << endl; // for precision 0.001
        cout << fixed << setprecision(3) << y << endl; // for precision 0.001
    } else {
        // If determinant is zero, the system may have no solution or infinite solutions
        cout << "No unique solution exists." << endl;
    }

    return 0;
}