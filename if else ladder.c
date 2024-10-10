#include <stdio.h>

// Main function where program execution begins
int main() {
  // Declare and initialize an integer variable to store the age
  int age = 8;

  // Determine the life stage based on the age
  if (age >= 13 && age < 20) {
    // Print "Teenager " if age is between 13 and 20
    printf("Teenager ");
  } 
  else if (age >= 0 && age < 13) {
    // Print "Prepubescent " if age is between 0 and 13
    printf("Prepubescent ");
  } 
  else {
    // Print "Adult " for all other ages (including negative ages, which might not be intended)
    printf("Adult ");
  } 
  
  // Return 0 to indicate successful program execution
  return 0;
}