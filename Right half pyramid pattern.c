#include <stdio.h>

int main()
{
    // Define the number of rows for the pyramid
    int rows = 5;

    // First loop for iterating over each row
    for (int i = 0; i < rows; i++) {
        // Second loop for printing stars in each row
        // This loop runs from 0 to the current row number (i)
        for (int j = 0; j <= i; j++) {
            // Print a star followed by a space
            printf("* ");
        }
        // Move to the next line after printing all stars in the current row
        printf("\n");
    }
    return 0; // Indicate that the program ended successfully
}