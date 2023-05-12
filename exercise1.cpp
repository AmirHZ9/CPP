#include <iostream>
using namespace std;

int main() {
    int option;

    cout << "Please select an option:\n";
    cout << "1. Enter a list of positive numbers and find the highest score.\n";
    cout << "2. Enter 5 numbers and show the number of digits for each number.\n";
    cout << "3. Enter some even numbers and calculate the factorial of each number.\n";
    cout << "4. Enter 3 numbers and check if each one is a Fibonacci number or not.\n";
    cin >> option;

    switch (option) {
        case 1: {
            int n;
                   cout << "Enter the number of numbers: ";
                     cin >> n;
                 cout << "Enter " << n << " positive numbers: ";
                  int highest = 0, highest_count = 0;
            for (int i = 0; i < n; i++) {
                int num;
                cin >> num;

                if (num > highest) {
                    highest = num;
                    highest_count = 1;
                }
                else if (num == highest) {
                    highest_count++;
                }
            }

            cout << "The highest number is " << highest << ", which appears " << highest_count << " time(s).\n";
            break;
        }
        case 2: {
            int nums[5];
            cout << "Enter 5 numbers: ";
            for (int i = 0; i < 5; i++) {
                cin >> nums[i];
            }

            for (int i = 0; i < 5; i++) {
                int num_digits = 0, n = nums[i];
                while (n > 0) {
                    n /= 10;
                    num_digits++;
                }
                cout << "Number " << nums[i] << " has " << num_digits << " digit(s).\n";
            }
            break;
        }
        case 3: {
            int n;
            cout << "Enter the number of even integers: ";
            cin >> n;

                cout << "Enter "<< n <<" even integer: ";
            for (int i = 0; i < n; i++) {
                int num;
                cin >> num;

                if (num % 2 != 0) {
                    cout << "The number is not even. Please try again.\n";
                    i--;
                    continue;
                }

               int factorial = 1;
                for (int j = 1; j <= num; j ++) {
                    factorial *= j;
                }
                cout << "The factorial of " << num << " is " << factorial << ".\n";
            }
            break;
        }
        case 4: {
            int nums[3];
            cout << "Enter 3 integers: ";
            for (int i = 0; i < 3; i++) {
                cin >> nums[i];
            }

            for (int i = 0; i < 3; i++) {
                int a = 0, b = 1, c = a + b;
                while (c < nums[i]) {
                    a = b;
                    b = c;
                    c = a + b;
                }
                if (c == nums[i]) {
                    cout << nums[i] << " is a Fibonacci number.\n";
                }
                else {
                    cout << nums[i] << " is not a Fibonacci number.\n";
                }
            }
            break;
        }
        default:
            cout << "Invalid option selected.\n";
    }}

