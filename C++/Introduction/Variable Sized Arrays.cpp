#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int no_of_arrays, no_of_queries;
    
    // Input the number of arrays and the number of queries
    cin >> no_of_arrays >> no_of_queries;
    
    vector<vector<int>> vec1;

    // Input the arrays
    for (int a = 0; a < no_of_arrays; a++) {
        int inside_array_size;
        cin >> inside_array_size;
        
        vector<int> vec2;
        
        // Input the elements of the current array
        for (int b = 0; b < inside_array_size; b++) {
            int c;
            cin >> c;
            vec2.push_back(c);
        }
        vec1.push_back(vec2);
    }
    
    // Process the queries
    for (int i = 0; i < no_of_queries; i++) {
        int d, e;
        cin >> d >> e;
        cout << vec1[d][e] << endl; // Output the queried element
    }
    
    return 0;
}
