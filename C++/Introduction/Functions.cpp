#include <iostream>
#include <cstdio>
using namespace std;

// Function to find the maximum of four integers
int max_of_four(int a, int b, int c, int d) {
    int max_val = a; // Assume the first value is the maximum
    if (b > max_val) max_val = b; // Update max_val if b is greater
    if (c > max_val) max_val = c; // Update max_val if c is greater
    if (d > max_val) max_val = d; // Update max_val if d is greater
    return max_val; // Return the maximum value
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    // Find and print the maximum of the four input values
    cout << max_of_four(a, b, c, d);
    
    return 0;
}
