#include <iostream>
using namespace std;

// Non-Recursive Fibonacci Function
int fibonacci_non_recursive(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

// Recursive Fibonacci Function
int fibonacci_recursive(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Time and Space Complexity Analysis
void analyze_complexity() {
    cout << "\nNon-Recursive Fibonacci:" << endl;
    cout << "Time Complexity: O(n)" << endl;
    cout << "Space Complexity: O(1)" << endl;

    cout << "\nRecursive Fibonacci:" << endl;
    cout << "Time Complexity: O(2^n)" << endl;
    cout << "Space Complexity: O(n)" << endl;
}

// Example Usage
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Non-Recursive Fibonacci of " << n << " is: " << fibonacci_non_recursive(n) << endl;
    cout << "Recursive Fibonacci of " << n << " is: " << fibonacci_recursive(n) << endl;

    analyze_complexity();
    return 0;
}
