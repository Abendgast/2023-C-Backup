

#include <iostream>
#include <Windows.h>
using namespace std;
double calculateProduct(int n, int k) {
double result = 1.0;
for (int i = 1; i <= n - k + 1; i++) {
result *= (n * n - n + i) / (n + 4 + i);
}
return result;
}
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
int n, k;
cout << "Enter the value of n: ";
cin >> n;
cout << "Enter the value of k: ";
cin >> k;
double result = calculateProduct(n, k);
cout << "Result: " << result << endl;
system("pause");
return 0;
}






#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
int n = 100; // number of partitions
double a = 0; // lower limit of integration
double b = 5; // upper limit of integration
double h = (b - a) / n; // width of each partition
double sum = 0; // variable for storing the sum of areas
for (int i = 1; i < n; i++) {
double x = a + i * h; // x-coordinate of the current partition

sum += sqrt(pow(x, 2) + 1); // add the area of the current partition to the sum
}
double integral = (h / 2) * (sqrt(pow(a, 2) + 1) + sqrt(pow(b, 2) + 1) + 2 * sum); //
calculate the integral
cout << "The value of the integral: " << integral <<endl;
return 0;
}






#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
int n = 100; // number of partitions
double a = 0; // lower limit of integration
double b = 5; // upper limit of integration
double h = (b - a) / n; // width of each partition
double sum = 0; // variable for storing the sum of areas
int i = 1;
while (i < n) {
double x = a + i * h; // x-coordinate of the current partition
sum += sqrt(pow(x, 2) + 1); // add the area of the current partition to the sum
i++;
}
double integral = (h / 2) * (sqrt(pow(a, 2) + 1) + sqrt(pow(b, 2) + 1) + 2 * sum); //
calculate the integral
cout << "The value of the integral: " << integral << endl;
return 0;
}
