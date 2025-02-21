#include <stdio.h>
#include <math.h>

// Function to update the values of a and b
void update(int *a, int *b) {
    *a = *a + *b; // Update a to be the sum of a and b
    *b = abs(*a - 2 * (*b)); // Update b to be the absolute difference
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    // Input two integers a and b
    scanf("%d %d", &a, &b);

    // Call the update function
    update(pa, pb);

    // Output the updated values of a and b
    printf("%d\n%d", a, b);

    return 0;
}
