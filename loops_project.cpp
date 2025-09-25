/*
Project: Loop Mastery – C++ Interactive Menu System
Course: C++ Programming
Student: Kavery Smith
Week: 5
*/

#include <iostream>
#include <string>
using namespace std;

// Function 1: Factorial Calculator (while loop)
void factorialCalculator() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int result = 1;
    int i = 1;

    while (i <= n) {
        result *= i;
        i++;
    }

    cout << "Factorial of " << n << " is: " << result << endl;
}

// Function 2: Number Pyramid (for loop, nested loops)
void numberPyramid() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // print spaces
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        // print numbers
        for (int num = 1; num <= i; num++) {
            cout << num << " ";
        }
        cout << endl;
    }
}

// Function 3: Sum of Even or Odd Numbers (do-while loop)
void sumEvenOdd() {
    int choice, n;
    cout << "Choose option: \n1. Sum of even numbers \n2. Sum of odd numbers\n";
    cin >> choice;
    cout << "Enter an upper limit: ";
    cin >> n;

    int sum = 0;
    int i = 1;

    do {
        if (choice == 1 && i % 2 == 0) {
            sum += i;
        } else if (choice == 2 && i % 2 != 0) {
            sum += i;
        }
        i++;
    } while (i <= n);

    if (choice == 1)
        cout << "Sum of even numbers up to " << n << " is: " << sum << endl;
    else if (choice == 2)
        cout << "Sum of odd numbers up to " << n << " is: " << sum << endl;
    else
        cout << "Invalid choice." << endl;
}

// Function 4: Reverse a String (while loop)
void reverseString() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversed = "";
    int i = str.length() - 1;

    while (i >= 0) {
        reversed += str[i];
        i--;
    }

    cout << "Reversed string: " << reversed << endl;
}

// Main Menu
int main() {
    int choice;

    do {
        cout << "\n========= Interactive Utility Program =========\n";
        cout << "1. Factorial Calculator\n";
        cout << "2. Number Pyramid\n";
        cout << "3. Sum of Even or Odd Numbers\n";
        cout << "4. Reverse a String\n";
        cout << "5. Exit\n";
        cout << "==============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: factorialCalculator(); break;
            case 2: numberPyramid(); break;
            case 3: sumEvenOdd(); break;
            case 4: reverseString(); break;
            case 5: cout << "Goodbye! Program ending.\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

