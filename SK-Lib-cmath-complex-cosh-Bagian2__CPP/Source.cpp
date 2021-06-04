
// c++ program to demonstrate
// example of cosh() function.

#include <iostream>
#include <cmath>
#include <complex>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

// driver program
int main() {
	complex<double> complexnumber(1.0, 0.0);

	// use of cosh() function for complex number
	cout << "The cosh of " << complexnumber << " is " << cosh(complexnumber) << endl;

	_getch();
	return 0;
}
