

#include <cstdio>
#include <cmath>
#include <cerrno>
#include <Windows.h>
// Function to calculate the hyperbolic sine
double sh(double x) {
return (std::exp(x) - std::exp(-x)) / 2; // Hyperbolic sine formula
}
int main() {
double start, end, step; // Variables for range and pitch
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
printf("Enter the beginning of the range: ");
scanf_s("%lf", &start); // Read the beginning of the range
printf("Enter end of range: ");
scanf_s("%lf", &end); // Read the end of the range
printf("Enter step: ");
scanf_s("%lf", &step); // Read the step
FILE* file; // File pointer
errno_t err = fopen_s(&file, "output.txt", "w"); // Open the file for recording
if (file != NULL && err == 0) {
for (double x = start; x <= end; x += step) { // Go through the range with the specified step
fprintf(file, "sh(%f) = %f\n", x, sh(x)); // Write the result to the file
}
fclose(file);
printf("The result is written to the file 'output.txt'.\n");
system("start output.txt"); // Add this line to open the notebook
}
else {
printf("Error opening file!!!.\n");
}
return 0;
}







#include <iostream>
#include <fstream>
#include <cmath>
#include <windows.h>
using namespace std;
// Function to calculate the hyperbolic sine
double sh(double x) {
return (exp(x) - exp(-x)) / 2; // Hyperbolic sine formula
}
int main() {
double start, end, step; // Variables for range and pitch
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Enter the beginning of the range: ";
cin >> start; // Read the beginning of the range
cout << "Enter end of range: ";
cin >> end; // Read the end of the range
cout << "Enter step: ";
cin >> step; // Read the step
ofstream file("output.txt"); // Open the file for recording
if (file.is_open()) {
for (double x = start; x <= end; x += step) { // Go through the range with the specified step
file << "sh(" << x << ") = " << sh(x) << endl; // Write the result to the file
}
file.close();
cout << "The result is written to the file 'output.txt'." << endl;
system("start output.txt"); // Add this line to open the notebook
}
else {
cout << "Error opening file!!!" << endl;
}
return 0;
}
