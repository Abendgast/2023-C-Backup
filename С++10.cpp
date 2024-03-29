


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;
// Function for array generation
void generateArray(int** arr, int n) {
srand(time(NULL));
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
arr[i][j] = rand() % 51;
}
}
}
// Function for array output
void printArray(int** arr, int n) {
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if (i == j) {
cout << "\033[1;31m" << arr[i][j] << " \033[0m";
}
else {
cout << arr[i][j] << " ";
}
}
cout << endl;
}
}
// Function for sorting the main diagonal using the descending insertion method
void sortDiagonal(int** arr, int n) {
for (int i = 1; i < n; i++) {
int j = i - 1;
int temp = arr[i][i];
while (j >= 0 && arr[j][j] < temp) {
arr[j + 1][j + 1] = arr[j][j];
j--;
}
arr[j + 1][j + 1] = temp;
}
}

int main() {

const int N = 35;
int** arr = new int* [N];
for (int i = 0; i < N; i++) {
arr[i] = new int[N];
}
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
generateArray(arr, N);
cout << "Initial array:" << endl;
printArray(arr, N);
sortDiagonal(arr, N);
cout << "Sorted array along the main diagonal:" << endl;
printArray(arr, N);
for (int i = 0; i < N; i++) {
delete[] arr[i];
}
delete[] arr;
return 0;
}
