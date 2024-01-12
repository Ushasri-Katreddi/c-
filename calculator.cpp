#include <iostream>

using namespace std;

int main() {
    char operation;
    double result, num;

    // Get the first number
    cout << "Enter the first number: ";
    cin >> result;

    // Get the operation
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculations
    while (true) {
        // Get the next number
        cout << "Enter the next number (or 0 to calculate): ";
        cin >> num;

        if (num == 0) {
            break;
        }

        // Perform the operation
        switch (operation) {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                if (num != 0) {
                    result /= num;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                    return 1;  // Exit with an error code
                }
                break;
            default:
                cout << "Error: Invalid operation." << endl;
                return 1;  // Exit with an error code
        }
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
