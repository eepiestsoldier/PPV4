#include <iostream>
#include <math.h>
#include <iomanip>
#include "determinant.h" 

using namespace std;

int main() {

    int Class = getClass();

    double c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44, A, A11, A12, A13, A21, A22, A23, A31, A32, A33;

    if (Class < 2 || Class > 4) {
        cout << "Invalid class entered. Please enter a value between 2 and 4." << endl;
        return 1;
    }

    if (Class == 2) {
        cout << "Enter values for the 2x2 determinant:" << endl;
        cin >> c11 >> c12 >> c21 >> c22;
        A = calculateDeterminant2x2(c11, c12, c21, c22);
    }

    if (Class == 3) {
        cout << "Enter values for the 3x3 determinant:" << endl;
        cin >> c11 >> c12 >> c13 >> c21 >> c22 >> c23 >> c31 >> c32 >> c33;
        A = calculateDeterminant3x3(c11, c12, c13, c21, c22, c23, c31, c32, c33);
    }

    if (Class == 4) {
        cout << "Enter values for the 4x4 determinant:" << endl;
        cin >> c11 >> c12 >> c13 >> c14 >> c21 >> c22 >> c23 >> c24 >> c31 >> c32 >> c33 >> c34 >> c41 >> c42 >> c43 >> c44;
        A = calculateDeterminant4x4(c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
    }

    if (A != 0) {
        cout << "Answer: " << A << endl;

        if (Class == 3)
        {
            double B = calculateInduced3x3(c11, c12, c13, c21, c22, c23, c31, c32, c33, A11, A12, A13, A21, A22, A23, A31, A32, A33);
            
            cout << endl;
            cout << "In case u were looking for the induced value of the matrix: "<< endl;
            cout << endl;
            cout << "\t" << A11 << "\t" << A21 << "\t" << A31 << endl;
            cout << "1/" << A << "\t" << A12 << " \t" << A22 << " \t" << A32 << endl;
            cout << "\t" << A13 << "\t" << A23 << "\t" << A33 << endl;
        }
    }
    else {
        cout << "Impossible determinant. Answer is 0" << endl;
    }

    system("pause");
    return 0;
}
