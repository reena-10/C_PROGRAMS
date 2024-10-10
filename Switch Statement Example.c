#include <stdio.h>

// Main function where program execution begins
int main() {
  // Declare and initialize an integer variable
  int day = 3;

  // Use a switch statement to print the day of the week
  switch (day) {
    case 1:
      printf("Monday\n");
      break;
    case 2:
      printf("Tuesday\n");
      break;
    case 3:
      printf("Wednesday\n");
      break;
    case 4:
      printf("Thursday\n");
      break;
    case 5:
      printf("Friday\n");
      break;
    case 6:
      printf("Saturday\n");
      break;
    case 7:
      printf("Sunday\n");
      break;
    default:
      printf("Invalid day\n");
      break;
  }

  // Return 0 to indicate successful program execution
  return 0;
}