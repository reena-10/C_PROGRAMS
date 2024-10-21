#include <stdio.h>

// Function to print square pattern
void printSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    printSquare(size);

    return 0;
}