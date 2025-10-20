#include <iostream>
using namespace std;

float dollarsToPesos(float dollars ) {
	return dollars * 58;
}
float pesosToDollars(float pesos ) {
	return pesos / 58;
}
int main () {
	char choice;
    float money;

    cout << "Enter 'D' to convert Dollars to Pesos, or 'P' to convert Pesos to Dollars: ";
    cin >> choice;
	
	
	if (choice == 'D' || choice == 'd') {
        cout << "Enter money in dollars $: ";
        cin >> money;
        float result = dollarsToPesos(money);
	cout << "P" << result << endl;
    } else if (choice == 'P' || choice == 'p') {
        cout << "Enter money in pesos P: ";
        cin >> money;
        float result = pesosToDollars(money);
	cout << "$" << result << endl;
    } else {
        cout << "Invalid choice. Please enter 'D' or 'P'." << endl;
    }

    return 0;
}
