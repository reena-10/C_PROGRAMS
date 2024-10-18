#include <stdio.h>

// Function to print Fibonacci series
void printFibonacci(int n) {
    // Static variables to hold the last two Fibonacci numbers
    static int n1 = 0, n2 = 1, n3;

    // Base condition to stop recursion
    if (n > 0) {
        // Calculate the next Fibonacci number
        n3 = n1 + n2;

        // Update the last two Fibonacci numbers
        n1 = n2;
        n2 = n3;

        // Print the current Fibonacci number
        printf("%d ", n3);

        // Recursive call to print the next Fibonacci number
        printFibonacci(n - 1);
    }
}

int main() {
    int n;

    // Prompt user for the number of Fibonacci elements to print
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Print the first two Fibonacci numbers
    printf("Fibonacci Series: ");
    printf("%d %d ", 0, 1);

    // Call the function to print the remaining Fibonacci numbers
    // (n-2) because the first two numbers are already printed
    printFibonacci(n - 2);

    return 0;  // Return 0 to indicate successful execution
}