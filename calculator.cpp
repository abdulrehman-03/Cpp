#include <iostream>
#include <cmath>

using namespace std;

void calc_arith() {
    char operation;
    float num1 = 0;
    float num2 = 0;

    cout << "Select your operation:\n";
    cout << "1. Sum\n";
    cout << "2. Diff\n";
    cout << "3. Prod\n";
    cout << "4. Quot\n";

    cin >> operation;
    cout << "Enter a value:";
    cin >> num1;

    cout << "Enter another value:";
    cin >> num2;

    cout << "Result: ";

    switch (operation) {
        case '1':
            cout << (num1 + num2);
            break;
        case '2':
            cout << (num1 - num2);
            break;
        case '3':
            cout << (num1 * num2);
            break;
        case '4':
            if (num2 != 0) {
                cout << (num1 / num2);
            } else {
                cout << "Div by zero!\n";
            break;
			}	
        default:
            cout << "Error occurred!\n";
            break;
    }
    cout << endl;
}

void calc_trig() {
    int operation = 0;
    float value = 0.0;
    cout << "Choose:\n";
    cout << "1. Sine\n";
    cout << "2. Cosine\n";
    cout << "3. Tangent\n";
    cout << "Op: ";
    cin >> operation;
    cout << "Enter input: ";
    cin >> value;
    if (operation == 1) {
        cout << sin(value);
    } else if (operation == 2) {
        cout << cos(value);
    } else if (operation == 3) {
        cout << tan(value);
    } else {
        cout << "Error occurred!\n";
    }
    cout << endl;
}

void calc_exp() {
    float base = 0.0;
    float exp = 0.0;

    cout << "Enter base:";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;
    cout << pow(base, exp) << endl;
}

void calc_log() {
    float input = 0.0;
    cout << "Enter the input for log(e): ";
    cin >> input;
    if (input > 0) {
        cout << log(input) << endl;
    } else {
        cout << "Invalid input!\n";
    }
}

int main() {
    int choice = 0;
    char proceed;

    do{
    	system("CLS");
	cout << "Calculation Menu\n\n";
    	cout << "1. Use Arithmetic Calculator\n";
    	cout << "2. Use Trigonometry Calculator\n";
    	cout << "3. Use Exponential Calculator\n";
    	cout << "4. Use Logarithmic Calculator\n\n";
    	
        cout << "Which type of Calculator you want to use?\n";
        cin >> choice;

        switch (choice) {
            case 1:
                calc_arith();
                break;
            case 2:
                calc_trig();
                break;
            case 3:
                calc_exp();
                break;
            case 4:
                calc_log();
                break;
            default:
                cout << "Invalid operation\n";
        }

        cout << "Do you wish to continue? y/n" << endl;
        cin >> proceed;
        if (proceed == 'n') {
            break;
        }
    }
    while (proceed == 'y');

    return 0;
}
