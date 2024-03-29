
ConsoleApplication1.cpp
#include <iostream>
#include "calculate.h"
using namespace std;
int main() {
double x = -2.1, l, a;
calculate(x, l, a);
cout << "x = " << x << "\nl = " << l << "\na = " << a << endl;
return 0;
}

calculate.cpp
#include <cmath>
#include "calculate.h"
void calculate(double x, double& l, double& a) {
l = exp(2 * x - 1.3) / cbrt(abs(x) + 2);
a = 1 + l / 3;
}

calculate.h
#pragma once
void calculate(double x, double& l, double& a);


ConsoleApplication1.cpp
#include <iostream>
#include "calculate.h"
#include "print_result.h"
using namespace std;
int main() {
// Initialization of variables
double x = 8.5e-1;
double y = -15.2;
double z = -1.4e-1;
// Calculate the value of b
double b = calculate(&x, &y, &z);
// Output the result
print_result(b);
return 0;
}
calculate.cpp
#include <cmath>
#include "calculate.h"
double calculate(double* x, double* y, double* z) {
double sin_squared_y = pow(sin(abs(*y)), 2);
double cos_squared_z = pow(cos(pow(*z, 2)), 2);
double denominator = 3.0 / 5.0 + cos_squared_z;
double fraction = sin_squared_y / denominator;
return *x + fraction;
}

calculate.h
#pragma once
double calculate(double* x, double* y, double* z);

print_result.cpp

#include <iostream>
#include "print_result.h"
using namespace std;
void print_result(double result) {
cout << "b = " << result << endl;
}
print_result.h
#pragma once
void print_result(double result);







ConsoleApplication1.cpp
#include <iostream>
#include <Windows.h>
#include "calculate_circle.h"
#include "print_result.h"
using namespace std;
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
double a; // side length of an equilateral triangle
cout << "Enter the length of the side of an equilateral triangle: ";
cin >> a;
double L = calculate_circle(a); // calculate the length of the circle
print_result(L); // Output the result
return 0;
}

Calculate_circle.cpp
#include <cmath>
#include "calculate_circle.h"
double calculate_circle(double a) {
const double pi = 3.14159265358979323846; // the value of the number π
double r = a / (2 * sqrt(3)); // calculate the radius of the circle
double L = 2 * pi * r; // calculate the length of the circle
return L;
}
Calculate_circle.h
#pragma once
double calculate_circle(double a);
print_result.cpp
#include <iostream>
#include "print_result.h"
using namespace std;
void print_result(double L) {
cout << "The length of the circle inscribed in an equilateral triangle: " << L << endl;
}
print_result.h
#pragma once
void print_result(double L);
