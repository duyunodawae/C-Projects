#include <iostream>
using namespace std;

int addTwoNumbers(int a, int b);
int subtractTwoNumbers(int a, int b); 
int multiplyTwoNumbers(int a, int b);
double divideTwoNumbers(int a, int b);


int main() {
    int num1;
    int num2;
    int sum;
    int diff;
    int prod;
    double quot;
    
    cout << "Enter first number (0-9): ";
    cin >> num1;
    cout << "Enter second number (0-9): ";
    cin >> num2;
    
    sum = addTwoNumbers(num1, num2);
    cout << "Sum is: " << sum << endl;
    
    diff = subtractTwoNumbers(num1, num2);
    cout << "Difference is: " << diff<< endl;
    
    prod = multiplyTwoNumbers(num1, num2);
    cout << "Product is: " << prod << endl;
    
    quot = divideTwoNumbers(num1, num2);
    if (num2 != 0) {
    cout << "Quotient is: " << quot << endl;
}
    return 0;
}


int addTwoNumbers(int a, int b) {
    return a + b;
}

int subtractTwoNumbers(int a, int b) {
    return a - b;
}

int multiplyTwoNumbers(int a, int b) {
    return a * b;
}

   
double divideTwoNumbers(int a, int b) {
    if (b == 0) {
    cout << "Error: Division by zero is not allowed" << endl;
        return 0;
}
    return (1.0 *a) / b;
}


