#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a = 0, j = 0;
    
    // Input the size of the array
    cin >> a;
    
    int b[a];
    
    // Input the elements of the array
    for (j = 0; j < a; j++) {
        cin >> b[j];
    }
    
    // Output the elements of the array in reverse order
    for (j = a - 1; j >= 0; j--) {
        cout << b[j] << " ";
    }
    
    return 0;
}
