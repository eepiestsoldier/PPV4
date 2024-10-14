#include "determinant.h"
#include <iostream>
using namespace std;

double calculateInduced3x3(double c11, double c12, double c13, double c21, double c22, double c23, double c31, double c32, double c33, double& A11, double& A12, double& A13, double& A21, double& A22, double& A23, double& A31, double& A32, double& A33) {

	A11 = (c22 * c33) - (c32 * c23);
	A12 = -((c21 * c33) - (c31 * c23));
	A13 = (c21 * c32) - (c31 * c22);
	A21 = -((c12 * c33) - (c32 * c13));
	A22 = (c11 * c33) - (c31 * c13);
	A23 = -((c11 * c32) - (c31 * c12));
	A31 = (c21 * c23) - (c22 * c13);
	A32 = -((c11 * c23) - (c21 * c13));
	A33 = (c11 * c22) - (c21 * c12);

	return A11, A12, A13, A21, A22, A23, A31, A32, A33;

}

