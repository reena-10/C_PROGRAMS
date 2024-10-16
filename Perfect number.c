/* C program to check whether the given number is the Perfect number */

#include <stdio.h>  // include standard input/output library
#include <conio.h>  // include console input/output library

// main function where program execution begins
void main()  
{  
    // declare and initialize the variables
    int num, rem, sum = 0, i;  // num: input number, rem: remainder, sum: sum of divisors, i: loop counter

    // take an input from the user
    printf("Enter a number\n");  
    scanf("%d", &num);      // store user input in num variable

    // find all divisors and add them
    for(i = 1; i < num; i++)  // loop through numbers from 1 to num-1
    {  
        rem = num % i;  // calculate remainder of num divided by i
        if (rem == 0)  // check if remainder is 0 (i.e., i is a divisor)
        {  
            sum = sum + i;  // add divisor to sum
        }  
    }

    // check if sum of divisors is equal to the number
    if (sum == num)  
        printf(" %d is a Perfect Number");  // print perfect number message
    else  
        printf("\n %d is not a Perfect Number");  // print not perfect number message

    getch();  // wait for user to press a key before exiting
}