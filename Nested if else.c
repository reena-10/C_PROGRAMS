#include <stdio.h>

// Main function where program execution begins
int main() {
  // Declare and initialize two integer variables
  int x = 3;
  int y = 7;

  // Check if x is positive
  if (x > 0) {
    // If x is positive, check if y is greater than 5
    if (y > 5) {
      // Print a message if both conditions are true
      printf("x is positive and y is greater than 5\n");
    } else {
      // Print a message if x is positive but y is not greater than 5
      printf("x is positive but y is not greater than 5\n");
    }
  } else {
    // If x is not positive, check if y is greater than 5
    if (y > 5) {
      // Print a message if x is not positive but y is greater than 5
      printf("x is not positive but y is greater than 5\n");
    } else {
      // Print a message if both x is not positive and y is not greater than 5
      printf("Both x is not positive and y is not greater than 5\n");
    }
  }

  // Return 0 to indicate successful program execution
  return 0;
}