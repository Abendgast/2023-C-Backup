

#include <iostream>
#include <stack>
#include <Windows.h>
using namespace std;
stack<int> s;
int num;
void inputNumbers() { // recursive number input function
cin >> num;
if (num == 0)
return;
s.push(num); // add a number to the stack
inputNumbers(); // function call again
}
void outputNumbers(int order = 1) { // recursive number output function
if (s.empty()) // if the stack is empty, then print a message
return;
cout << "Order number: " << order << ", Value: " << s.top() << endl;
s.pop(); // remove the number from the stack
outputNumbers(order + 1); // function call again
}
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Enter numbers (0 to end):" << endl;
inputNumbers();
cout << "Total numbers: " << s.size() << endl;
outputNumbers();
return 0;
}
