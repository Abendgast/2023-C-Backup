

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
unsigned int unsignedInt;
short int shortInt;
unsigned short unsignedShort;
int integer;
unsigned long unsignedLong;
long int longInt;
float floatNumber;
double doubleNumber;
long double longDoubleNumber;
printf("Enter an unsigned integer (unsigned int): ");
scanf_s("%u", &unsignedInt);
printf("Entered unsigned integer: %u\n", unsignedInt);
printf("Enter a short integer (short int): ");
scanf_s("%hd", &shortInt);
printf("Entered short integer: %hd\n", shortInt);
printf("Enter an unsigned short integer (unsigned short): ");
scanf_s("%hu", &unsignedShort);
printf("Entered unsigned short integer: %hu\n", unsignedShort);

printf("Enter an integer (int): ");
scanf_s("%d", &integer);
printf("Entered integer: %d\n", integer);
printf("Enter an unsigned long integer: ");
scanf_s("%lu", &unsignedLong);
printf("Entered unsigned long integer: %lu\n", unsignedLong);
printf("Enter a long integer (long int): ");
scanf_s("%ld", &longInt);
printf("Entered long integer: %ld\n", longInt);
printf("Enter a single-precision floating-point number (float): ");
scanf_s("%f", &floatNumber);
printf("Entered single precision floating point number: %f\n",
floatNumber);
printf("Enter a double-precision floating-point number: ");
scanf_s("%lf", &doubleNumber);
printf("Entered double precision floating point number: %lf\n",
doubleNumber);
printf("Enter a maximum precision floating point number (long double):
");
scanf_s("%Lf", &longDoubleNumber);
printf("Entered maximum precision floating point number: %Lf\n",
longDoubleNumber);
return 0;
}






#include <iostream>
#include <fstream>
#include <Windows.h>
int main() {
std::ofstream outputFile("output.txt"); // Opening a file to record the results
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
unsigned int unsignedInt;
short int shortInt;
unsigned short unsignedShort;
int integer;
unsigned long unsignedLong;
long int longInt;
float floatNumber;
double doubleNumber;
long double longDoubleNumber;
std::cout << "Enter an unsigned integer (unsigned int): ";
std::cin >> unsignedInt;
std::cout << "Entered unsigned integer: " << unsignedInt << std::endl;
outputFile << "Entered unsigned integer: " << unsignedInt << std::endl;
std::cout << "Enter a short integer (short int): ";
std::cin >> shortInt;
std::cout << "Entered short integer: " << shortInt << std::endl;
outputFile << "Entered short integer: " << shortInt << std::endl;
std::cout << "Enter an unsigned short integer: ";
std::cin >> unsignedShort;
std::cout << "Entered unsigned short integer: " << unsignedShort <<
std::endl;
outputFile << "Entered unsigned short integer: " << unsignedShort <<
std::endl;
std::cout << "Enter an integer (int): ";
std::cin >> integer;
std::cout << "Entered integer: " << integer << std::endl;
outputFile << "Entered integer: " << integer << std::endl;

std::cout << "Enter an unsigned long integer: ";
std::cin >> unsignedLong;
std::cout << "Entered unsigned long integer: " << unsignedLong << std::endl;
outputFile << "Entered unsigned long integer: " << unsignedLong <<
std::endl;
std::cout << "Enter a long integer (long int): ";
std::cin >> longInt;
std::cout << "Entered long integer: " << longInt << std::endl;
outputFile << "Entered long integer: " << longInt << std::endl;
std::cout << "Enter a single-precision floating-point number (float): ";
std::cin >> floatNumber;
std::cout << "Entered single-precision floating-point number: " <<
floatNumber << std::endl;
outputFile << "Entered single-precision floating-point number: " <<
floatNumber << std::endl;
std::cout << "Enter a double-precision floating-point number: ";
std::cin >> doubleNumber;
std::cout << "Entered double-precision floating-point number: " <<
doubleNumber << std::endl;
outputFile << "Entered double-precision floating-point number: " <<
doubleNumber << std::endl;
std::cout << "Enter a maximum precision floating point number (long
double): ";
std::cin >> longDoubleNumber;
std::cout << "Entered maximum precision floating point number " <<
longDoubleNumber << std::endl;
outputFile << "Entered maximum precision floating point number " <<
longDoubleNumber << std::endl;
return (0);
}
