

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main() {
string sentence;
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Enter the sentence: ";
getline(cin, sentence);
string longestWord = "";
string currentWord = "";
for (char c : sentence) {
if (c == ' ') {
if (currentWord.length() > longestWord.length()) {
longestWord = currentWord;
}
currentWord = "";
}
else {
currentWord += c;
}
}
if (currentWord.length() > longestWord.length()) {
longestWord = currentWord;
}
cout << "Longest word: " << longestWord << endl;
return 0;
}






#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main() {
string sentence;
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Enter the sentence: ";
getline(cin, sentence);
int wordCount = 0;
bool inWord = false;
for (char c : sentence) {
if (c == ' ') {
if (inWord) {
wordCount++;
inWord = false;
}
}
else {
inWord = true;
}
}
if (inWord) {
wordCount++;
}
cout << "Number of words: " << wordCount << endl;
return 0;
}
