//simple calcu
#include <iostream>
using namespace std;

int main() {
    float a;
    float b;
    char op;
    
    cout << "Enter 1st number (a): ";
    cin >> a;
    cout << "Enter 2nd number (b): ";
    cin >> b;
    cout << "Enter operator (+, -, *, /); ";
    cin >> op;

   
    switch (op) {
        case '+':
            cout << a + b;
        break;
        
        case '-':
             cout << a - b;
        break;
        
        case '*':
            cout << a * b;
        break;
        
        case '/':
            cout << a / b;
        break;
    
    default:
        cout << "Invalid operator entered.";
    }
    
    return 0;
    
}
