

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;
struct Person {
string surname;
string name;
string gender;
double height;
double weight;
};
vector<Person> readFromFile(const string& filename) {
ifstream file(filename);
if (!file.is_open()) {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Failed to open file: " << filename << endl;
return {};
}
vector<Person> persons;
Person temp;
while (file >> temp.surname >> temp.name >> temp.gender >> temp.height >> temp.weight) {
persons.push_back(temp);
}
file.close();
return persons;
}
vector<Person> filterPersons(const vector<Person>& persons, double minHeight, double minWeight) {
vector<Person> filteredPersons;
for (const auto& person : persons) {
if (person.gender == "male" && person.height > minHeight && person.weight > minWeight) {
filteredPersons.push_back(person);
cout << "Suitable: " << person.surname << endl;
}

}
return filteredPersons;
}
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
double minHeight, minWeight;
string filename = "people.txt";
cout << "Enter minimum height and weight: ";
cin >> minHeight >> minWeight;
vector<Person> persons = readFromFile(filename);
if (persons.empty()) {
cout << "Failed to get information: " << filename << endl;
return 1;
}
vector<Person> filteredPersons = filterPersons(persons, minHeight, minWeight);
if (filteredPersons.empty()) {
cout << "Nobody fits." << endl;
}
return 0;
}













#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <vector>
using namespace std;

struct Faculty {
string facultyName;
string deanSurname;
string phoneNumber;
int totalStudents;
};
void printMenu() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "1. Create a new file and enter data\n";
cout << "2. Open already existing file\n";
cout << "3. View the contents of the file\n";
cout << "4. Edit data\n";
cout << "5. Search for data on one of the fields\n";
cout << "6. Delete data\n";
cout << "7. Exit\n";
}
//function to create a new file and enter data
void createNewFile() {
ofstream outputFile("facultyData.txt");
if (!outputFile) {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Failed to create file." << endl;
return;
}
int numFaculties;
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Enter the number of faculties: ";
cin >> numFaculties;
Faculty faculty;

for (int i = 0; i < numFaculties; i++) {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Enter data about the faculty " << i + 1 << ":\n";
cout << "Faculty name: ";
cin.ignore();
getline(cin, faculty.facultyName);
cout << "Dean's last name: ";
cin >> faculty.deanSurname;
cout << "Phone number of the dean's office: ";
cin >> faculty.phoneNumber;
cout << "Total number of students at the faculty: ";
cin >> faculty.totalStudents;
outputFile << faculty.facultyName << " "
<< faculty.deanSurname << " "
<< faculty.phoneNumber << " "
<< faculty.totalStudents << "\n";
}
outputFile.close();
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Data has been successfully written to the file.\n";
}
//function to open an existing file
void openExistingFile() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
ifstream inputFile("facultyData.txt");
if (!inputFile) {
cout << "Failed to open file." << endl;
return;
}
else {
cout << "File opened successfully." << endl;
}
Faculty faculty;
while (getline(inputFile, faculty.facultyName, ' ') && getline(inputFile, faculty.deanSurname, ' ') &&
getline(inputFile, faculty.phoneNumber, ' ') && inputFile >> faculty.totalStudents) {
inputFile.ignore();
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Faculty Name: " << faculty.facultyName << "\n";
cout << "Dean's Surname: " << faculty.deanSurname << "\n";
cout << "Dean's phone number: " << faculty.phoneNumber << "\n";
cout << "Total number of students at the faculty: " << faculty.totalStudents << "\n";
cout << "-----------------------------------\n";
}
inputFile.close();

}
//function to view file contents
void viewFile() {
SetConsoleOutputCP
(1251);
SetConsoleCP(1251);
ifstream inputFile("facultyData.txt");
if (!inputFile) {
cout << "Failed to open file." << endl;
return;
}
else {
cout << "File opened successfully." << endl;
}
Faculty faculty;
while (getline(inputFile, faculty.facultyName, ' ') && getline(inputFile, faculty.deanSurname, ' ') &&
getline(inputFile, faculty.phoneNumber, ' ') && inputFile >> faculty.totalStudents) {
inputFile.ignore();
cout << "Faculty Name: " << faculty.facultyName << "\n";
cout << "Dean's Surname: " << faculty.deanSurname << "\n";
cout << "Dean's phone number: " << faculty.phoneNumber << "\n";
cout << "Total number of students at the faculty: " << faculty.totalStudents << "\n";
cout << "-----------------------------------\n";
}
inputFile.close();
}
//function to edit data
void editData() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
ifstream inputFile("facultyData.txt");
if (!inputFile) {
cout << "Failed to open file." << endl;
return;
}
vector<Faculty> faculties;
Faculty faculty;
while (getline(inputFile, faculty.facultyName, ' ') && getline(inputFile, faculty.deanSurname, ' ') &&
getline(inputFile, faculty.phoneNumber, ' ') && inputFile >> faculty.totalStudents) {
inputFile.ignore();
faculties.push_back(faculty);
}
inputFile.close();
for (int i = 0; i < faculties.size(); i++) {
cout << i + 1 << ". " << faculties[i].facultyName << "\n";
}
int choice;
cout << "Select a record number to edit: ";
cin >> choice;
choice--; // adjust for 0-indexing

cout << "Enter new data for the selected record:\n";
cout << "Faculty name: ";
cin.ignore();
getline(cin, faculties[choice].facultyName);
cout << "Dean's last name: ";
cin >> faculties[choice].deanSurname;
cout << "Phone number of the dean's office: ";
cin >> faculties[choice].phoneNumber;
cout << "Total number of students at the faculty: ";
cin >> faculties[choice].totalStudents;
ofstream outputFile("facultyData.txt");
if (!outputFile) {
cout << "Failed to open file." << endl;
return;
}
for (const auto& faculty : faculties) {
outputFile << faculty.facultyName << " "
<< faculty.deanSurname << " "
<< faculty.phoneNumber << " "
<< faculty.totalStudents << "\n";
}
outputFile.close();
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Data successfully updated in file.\n";
}
//function for searching data by one of the fields
void searchData() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
ifstream inputFile("facultyData.txt");
if (!inputFile) {

cout << "Failed to open file." << endl;
return;
}
vector<Faculty> faculties;
Faculty faculty;
while (getline(inputFile, faculty.facultyName, ' ') && getline(inputFile, faculty.deanSurname, ' ') &&
getline(inputFile, faculty.phoneNumber, ' ') && inputFile >> faculty.totalStudents) {

inputFile.ignore();
faculties.push_back(faculty);
}
inputFile.close();
cout << "Enter the faculty name to search: ";
string searchFaculty;
cin.ignore();
getline(cin, searchFaculty);

for (const auto& faculty : faculties) {
if (faculty.facultyName == searchFaculty) {

cout << "Faculty Name: " << faculty.facultyName << "\n";
cout << "Dean's Surname: " << faculty.deanSurname << "\n";
cout << "Dean's phone number: " << faculty.phoneNumber << "\n";
cout << "Total number of students at the faculty: " << faculty.totalStudents <<

"\n";

cout << "-----------------------------------\n";
}
}
}
//function to remove data from file
void deleteData() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
ifstream inputFile("facultyData.txt");
if (!inputFile) {

cout << "Failed to open file." << endl;
return;
}

vector<Faculty> faculties;
Faculty faculty;
while (getline(inputFile, faculty.facultyName, ' ') && getline(inputFile, faculty.deanSurname, ' ') &&
getline(inputFile, faculty.phoneNumber, ' ') && inputFile >> faculty.totalStudents) {

inputFile.ignore();
faculties.push_back(faculty);
}
inputFile.close();
for (int i = 0; i < faculties.size(); i++) {

cout << i + 1 << ". " << faculties[i].facultyName << "\n";
}

int choice;
cout << "Select the record number to delete: ";
cin >> choice;
choice--; // adjust for 0-indexing

faculties.erase(faculties.begin() + choice);

ofstream outputFile("facultyData.txt");
if (!outputFile) {

cout << "Failed to open file." << endl;
return;
}
for (const auto& faculty : faculties) {

outputFile << faculty.facultyName << " "
<< faculty.deanSurname << " "

<< faculty.phoneNumber << " "
<< faculty.totalStudents << "\n";

}
outputFile.close();
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
cout << "Data has been successfully deleted from the file.\n";
}
int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
int choice;
do {
printMenu();
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1:
createNewFile();
break
case 2:
openExistingFile();
break
case 3:
viewFile();
break
// Call the function to view the contents of the file
case 4:
editData();
// Call function to edit data
break
case 5:
searchData();
// Call the function to search for data by one of the fields
break
case 6:
deleteDat
a();
// Call function to delete data
break
case 7:
cout << "Exiting the program.\n";
break
default:
cout << "Invalid choice. Try again.\n";
break
}
} while (choice != 7);
return 0;

}
