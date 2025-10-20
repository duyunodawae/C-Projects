#include <iostream>
using namespace std;
int main() {
 double physics, chemistry, biology, mathematics, computer;
 double total, percentage;
 int category;
 cout << "Enter your grade in Physics: ";
 cin >> physics;
 cout << "Enter your grade in Chemistry: ";
 cin >> chemistry;
 cout << "Enter your grade in Biology: ";
 cin >> biology;
 cout << "Enter your grade in Mathematics: ";
 cin >> mathematics;
 cout << "Enter your grade in Computer: ";
 cin >> computer;

 total = physics + chemistry + biology + mathematics + computer;
 percentage = (total / 5);
 if (percentage >= 90) {
 category = 1;
 } else if (percentage >= 80) {
 category = 2;
 } else if (percentage >= 70) {
 category = 3;
 } else if (percentage >= 60) {
 category = 4;
 } else if (percentage >= 40) {
 category = 5;
 } else {
 category = 6;
 }
 switch (category) {
 case 1:
 cout << "Average is: " << percentage << endl << "Grade Level = A";
 break;
 case 2:
 cout << "Average is: " << percentage << endl << "Grade Level = B";
 break;
 case 3:
 cout << "Average is: " << percentage << endl << "Grade Level = C";
 break;
 case 4:
 cout << "Average is: " << percentage << endl << "Grade Level = D";
 break;
 case 5:
 cout << "Average is: " << percentage << endl << "Grade Level = E";
 break;
 case 6:
 cout << "Average is: " << percentage << endl << "Grade Level = F";
 default:
 cout << "Invalid input. ";
 }

 return 0;
}
