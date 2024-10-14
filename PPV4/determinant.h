// determinant.h
#ifndef DETERMINANT_H
#define DETERMINANT_H

double calculateDeterminant2x2(double c11, double c12, double c21, double c22);
double calculateDeterminant3x3(double c11, double c12, double c13, double c21, double c22, double c23, double c31, double c32, double c33);
double calculateDeterminant4x4(double c11, double c12, double c13, double c14,
    double c21, double c22, double c23, double c24,
    double c31, double c32, double c33, double c34,
    double c41, double c42, double c43, double c44);

double calculateInduced3x3(double c11, double c12, double c13, double c21, double c22, double c23, double c31, double c32, double c33, double& A11, double& A12, double& A13, double& A21, double& A22, double& A23, double& A31, double& A32, double& A33);

int getClass();

#endif
