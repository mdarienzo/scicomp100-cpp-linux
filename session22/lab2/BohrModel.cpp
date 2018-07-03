// BohrModel.cpp

#include "stdafx.h"

using namespace std;

int main()
{
	const double eCharge = 1.6e-19;
	const double eMass = 9.1e-31;
	const double permittivity = 8.84e-12;
	const double hPlanck = 6.63e-34;
	const double speedLight = 3e8;

	const double E0 = (pow(eCharge, 4)*eMass) /
		(8 * pow(permittivity, 2) * pow(hPlanck, 2));

	const double rBohr = E0 / (hPlanck * speedLight);

	cout << "Bohr Model Hydrogen Spectral Lines" << endl;

	for (int i{ 1 }; i < 5; ++i) {
		for (int f{ i + 1 }; f < i + 6; ++f) {

			double Ei = 0;

			double Ef = 0;

			double nu = 0;

			double lambda = 0;

			cout << setw(3) << f;
			cout << setw(10) << setprecision(0) << fixed;
			cout << lambda << "nm" << endl;
		}
		// Skip a line between families
		cout << endl;
	}

	return 0;
}

