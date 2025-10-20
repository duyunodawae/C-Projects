//grade classification
#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter your grade (0-100): ";
    cin >> grade;
    
    if (grade >= 90 && grade <= 100) {
        cout << "Excellent";
   } else if (grade >= 80 && grade <= 89) {
        cout << "Good";
   } else if (grade >= 70 && grade <= 79) {
        cout << "Average";
   } else if (grade >= 0 && grade <= 70) {
        cout << "Fail";
    }   
    return 0;
}
