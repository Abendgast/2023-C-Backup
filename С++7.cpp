

#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
double x = 2.0; // value of x
double epsilon = 1e-4; // precision epsilon
double sum = 0.0; // the sum of the series
double term = x; // current row member initialized by x
double prevTerm = term + 1; // the previous member of the series, initialized with a different from
term value
int n = 1; // row member number

while (abs(term - prevTerm) > epsilon) {
prevTerm = term;
term *= -1 * x * x * (2 * n - 1) / (2 * n * (2 * n + 1)); // fixed calculation

member of the series

sum += term;

n++;
}
cout << "The sum of the row: " << sum << endl;

return 0;
}






#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
double a, x = 0.0;
cout << "Enter the value of a: ";
cin >> a;
do {
double y = sin(a * x);
cout<<"x="<<x<<",y="<<y<<endl;
x += 0.05;
}while(sin(a*x)>sin(a*(x-0.05)));
return 0;
}
