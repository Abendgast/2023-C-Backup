
#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
double phi, a, b;
// Step 1: Declare variables
a = 10; // Example of constant value for a
b = 5; // Example of constant value for b
// Step 2: Get input from the user
cout << "Enter the value of phi: ";
cin >> phi;
// Step 3: Implement the function
double result;
if (phi > a) {
result = atan(phi - b / 4);
}

else if (phi >= a && phi <= a + b) {
result = 0;
}
else {
result = tan((phi + b) / 3);
}
// Step 4: Display the result
cout << "The value of the function c(phi) is: " << result << endl;
return 0;
}






#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
// We get the coordinates of the point
int x, y;
cout << "Enter the x-coordinate: ";
cin >> x;
cout << "Enter the y-coordinate: ";
cin >> y;
// We get the radius and center of the circle
int R = 2;

int Xc = 0;
int Yc = 0;
// Check if the point is inside the circle
double dist = sqrt((x - Xc) * (x - Xc) + (y - Yc) * (y - Yc));
if (dist <= R) {
// Check if the point is on the correct side of the line
double dx = x - Xc;
double dy = y - Yc;
double m = dy / dx;
double d = m * Xc + Yc;
if (y <= m * x + d) {
cout << "Yes, the point is inside the region." << endl;
}
else {
cout << "No, the point is not inside the region." << endl;
}
}
else {
cout << "No, the point is not inside the circle." << endl;
}
return 0;
}





#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
const int tankCapacity[3] = { 100, 200, 300 }; // Tank capacities
int fuelVolume[3];
// Data entry
for (int i = 0; i < 3; i++) {
cout << "Enter the volume of fuel in the tank " << i + 1 << ": ";
cin >> fuelVolume[i];
}
// Check if fuel can be pumped
int totalFuel = fuelVolume[0] + fuelVolume[1] + fuelVolume[2];
for (int i = 0; i < 3; i++) {

if (tankCapacity[i] >= totalFuel) {
cout << "You can pump all the fuel into tank number " << i + 1 << endl;
return 0;
}
}
cout << "Unable to transfer all fuel" << endl;
return 0;
}
