#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 1.8) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

int main() {
    char choice;
    double temperature;

    cout << "Enter 'F' to convert Fahrenheit to Celsius, or 'C' to convert Celsius to Fahrenheit: ";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        double result = fahrenheitToCelsius(temperature);
        cout << "Temperature in Celsius: " << result << endl;
    } else if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        double result = celsiusToFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << result << endl;
    } else {
        cout << "Invalid choice. Please enter 'F' or 'C'." << endl;
    }

    return 0;
}
