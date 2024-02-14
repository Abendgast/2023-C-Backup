

#include <iostream>
#include <fstream>
#include <cstring>
#include <Windows.h>
using namespace std;
struct Number {
double value;
bool isPositive;
};
void printTable(Number* numbers, int count) {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Number\t\tPositive/Negative\n";
for (int i = 0; i < count; i++) {
cout << numbers[i].value << "\t\t" << (numbers[i].isPositive ? "Positive" : "Negative") << endl;
}
}
void editNumber(Number* numbers, int count, double oldValue, double newValue) {
for (int i = 0; i < count; i++) {
if (numbers[i].value == oldValue) {
numbers[i].value = newValue;
numbers[i].isPositive = newValue >= 0;
break
}
}
}
void deleteNumber(Number* numbers, int& count, int index) {
for (int i = index; i < count - 1; i++) {
numbers[i] = numbers[i + 1];

}
count--;
}
void insertNumber(Number* numbers, int& count, int index, double value) {
for (int i = count; i > index; i--) {
numbers[i] = numbers[i - 1];
}
numbers[index].value = value;
numbers[index].isPositive = value >= 0;
count++;
}
void solveProblem(Number* numbers, int count) {
int positiveCount = 0;
int negativeCount = 0;
for (int i = 0; i < count; i++) {
if (numbers[i].isPositive) {
positiveCount++;
}
else {
negativeCount++;
}
}
if (positiveCount > negativeCount) {
cout << "There are more positive numbers." << endl;
}
else if (negativeCount > positiveCount) {
cout << "There are more negative numbers." << endl;
}
else {
cout << "There are the same number of positive and negative numbers." << endl;
}
}
void printNumbersByCriteria(Number* numbers, int count, double criteria, bool greaterThan) {
for (int i = 0; i < count; i++) {
if ((greaterThan && numbers[i].value > criteria) || (!greaterThan && numbers[i].value < criteria)) {
cout << numbers[i].value << endl;
}
}
}
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
ifstream inFile("numbers.bin", ios::binary);
if (!inFile) {
cout << "Error opening file." << endl;
return 1;
}
inFile.seekg(0, ios::end);
int count = inFile.tellg() / sizeof(Number);
inFile.seekg(0, ios::beg);

Number* numbers = new Number[count];
inFile.read(reinterpret_cast<char*>(numbers), count * sizeof(Number));
inFile.close();
int choice;
do {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Menu:\n1. Display a table of all numbers\n2. Change a number\n3. Delete a number\n4.
Add number\n5. Solve the problem\n6. Output numbers by criterion\n7. Exit" << endl;
cin >> choice;
switch (choice) {
case 1:
printTable(numbers, count);
break
case 2:
double oldValue, newValue;
cout << "Enter old value: ";
cin >> oldValue;
cout << "Enter new value: ";
cin >> newValue;
editNumber(numbers, count, oldValue, newValue);
break
case 3:
int index;
cout << "Enter the index of the number to delete: ";
cin >> index;
deleteNumber(numbers, count, index);
break
case 4:
int insertIndex;
double insertValue;
cout << "Enter index to insert: ";
cin >> insertIndex;
cout << "Enter the value to insert: ";
cin >> insertValue;
insertNumber(numbers, count, insertIndex, insertValue);
break
case 5:
solveProblem(numbers, count);
break
case 6:
double criteria;
int criteriaChoice;
cout << "Enter the criterion value: ";
cin >> criteria;
cout << "Enter 1 to output numbers greater than the criterion, or 0 to output numbers less than
criterion: ";
cin >> criteriaChoice;
printNumbersByCriteria(numbers, count, criteria, criteriaChoice == 1);
break
case 7:
break
default:
cout << "Invalid choice." << endl;
break

}
} while (choice != 7);
ofstream outFile("numbers.bin", ios::binary);
outFile.write(reinterpret_cast<char*>(numbers), count * sizeof(Number));
outFile.close();
delete[] numbers;
return 0;
}
