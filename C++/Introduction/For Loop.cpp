#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b;
    
    // Array to store the string representation of numbers 1 to 9
    string one[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // Input two integers a and b
    cin >> a >> b;
    
    // Loop from a to b
    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            // Output the string representation of numbers 1 to 9
            cout << one[i] << endl;
        } else if (i % 2 == 0) {
            // Output "even" for even numbers greater than 9
            cout << "even" << endl;
        } else {
            // Output "odd" for odd numbers greater than 9
            cout << "odd" << endl;
        }
    }
    
    return 0;
}
