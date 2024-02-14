
#include <stdio.h>
#include <math.h>
#include <Windows.h>
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
double x = -2.1;
double l = exp(2 * x - 1.3) / cbrt(fabs(x) + 2);
double a = 1 + l / 3;
// Output the value of x
printf("x = %f\n", x);
// Output the value of l
printf("l = %f\n", l);
// Output the value of a
printf("a = %f\n", a);
return 0;
}





#include <iostream>
#include <cmath>
int main() {
double x = 8.5e-1; // The given value of x
double y = -15.2; // The given value of y
double z = -1.4e-1; // The given value of z
// Calculation of the value of the expression b
double b = x + (pow(sin(abs(y)), 2)) / (3.0 / 5.0 + pow(cos(pow(z, 2)), 2));
// Output the result
std::cout << "b = " << b << std::endl;
return 0;
}






#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {

SetConsoleOutputCP(1251);
SetConsoleCP(1251);
double a; // side length of an equilateral triangle
double r; // circle radius
double L; // circle length
const double pi = 3.14159265358979323846; // the value of the number π
std::cout << "Enter the length of the side of an equilateral triangle: ";
std::cin >> a;
r = a / (2 * sqrt(3)); // calculate the radius of the circle
L = 2 * pi * r; // calculate the length of the circle
std::cout << "Length of a circle inscribed in an equilateral triangle: " << L << std::endl;
return 0;
}
