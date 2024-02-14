

#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
const int n = 5; // number of points
double x[n] = { 1, 2, 3, 4, 5 }; // x coordinates
double y[n] = { 1, 2, 3, 4, 5 }; // y coordinates
double distance; // distance
int count = 0; // point counter
cout << "Enter the distance: ";
cin >> distance;
const double squaredDistance = distance * distance;
for (int i = 0; i < n; i++) {
const double squaredD = x[i] * x[i] + y[i] * y[i]; // calculate the square of the distance from the start
coordinates to the point
if (squaredD <= squaredDistance) { // if the squared distance is not greater than the squared distance entered
count++; // increase the counter
}
}
cout << "The number of points that are not more than " << distance << " = away from the origin of coordinates
" << count << endl;
return 0;
}
