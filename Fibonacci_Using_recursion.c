#include <stdio.h>

// Function to calculate Fibonacci numbers using recursion
int fibonacci(int n) {
    if (n == 0)
        return 0; // Base case: 0th Fibonacci number
    else if (n == 1)
        return 1; // Base case: 1st Fibonacci number
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n, i;

    // Input the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); // Call the recursive function
    }

    printf("\n");
    return 0;
}
