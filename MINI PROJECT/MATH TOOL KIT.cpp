#include<iostream>
using namespace std;


int calculate(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


bool calculate(long n) {
    if(n < 2) return false;
    for(int i = 2; i < n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int calculate(double n) {
    int num = (int)n;   
    int total = 0;
    while(num > 0) {
        total += num % 10;
        num /= 10;
    }
    return total;
}

int main() {

    int choice;
    int number;
    char repeat;

    do {

        cout << "=========== Math Function Library ===========\n";
        cout << "1. Calculate Factorial\n";
        cout << "2. Check if Prime\n";
        cout << "3. Calculate Sum of digits\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        cout << "Enter the number: ";
        cin >> number;

        switch(choice) {

            case 1:
                cout << "Factorial: " << calculate(number) << "\n";
                break;

            case 2:
                if(calculate((long)number))
                    cout << number << " is a Prime number!\n";
                else
                    cout << number << " is NOT a Prime number!\n";
                    
                    
                    
                break;

            case 3:
                cout << "Sum of digits: " << calculate((double)number) << "\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> repeat;

    } while(repeat == 'y' || repeat == 'Y');

    cout << "Thank you!\n";

    return 0;
}


