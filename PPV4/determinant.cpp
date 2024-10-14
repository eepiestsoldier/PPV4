// determinant.cpp
#include "determinant.h"
#include <iostream>
using namespace std;
int getClass() {
    int Class;
    cout << "What class is the determinant: ";
    cin >> Class;
    return Class;
}

double calculateDeterminant2x2(double c11, double c12, double c21, double c22) {
    return (c11 * c22) - (c12 * c21);
}

double calculateDeterminant3x3(double c11, double c12, double c13, double c21, double c22, double c23, double c31, double c32, double c33) {
    return (c11 * c22 * c33) + (c12 * c23 * c31) + (c13 * c21 * c32) -
        ((c31 * c22 * c13) + (c32 * c23 * c11) + (c33 * c21 * c12));
}




double calculateDeterminant4x4(double c11, double c12, double c13, double c14,
    double c21, double c22, double c23, double c24,
    double c31, double c32, double c33, double c34,
    double c41, double c42, double c43, double c44) {
    double C1 = (c22 * c33 * c44) + (c23 * c34 * c42) + (c32 * c43 * c24) -
        ((c42 * c33 * c24) + (c43 * c34 * c22) + (c44 * c32 * c23));
    double C2 = (c21 * c33 * c44) + (c23 * c34 * c41) + (c31 * c43 * c24) -
        ((c41 * c33 * c24) + (c43 * c34 * c21) + (c44 * c31 * c23));
    double C3 = (c21 * c32 * c44) + (c22 * c34 * c41) + (c31 * c42 * c24) -
        ((c41 * c32 * c24) + (c42 * c34 * c21) + (c44 * c31 * c22));
    double C4 = (c21 * c32 * c43) + (c22 * c33 * c41) + (c31 * c42 * c23) -
        ((c41 * c32 * c23) + (c42 * c33 * c21) + (c43 * c31 * c22));

    return (c11 * C1) - (c12 * C2) + (c13 * C3) - (c14 * C4);
}
