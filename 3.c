// Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h> 
 int main() 
{ 
    int A; 
printf("Enter the number A: "); 

    scanf("%d", &A); 
 

    if (A > 0) 

        printf("%d is positive.", A); 

    else if (A < 0) 

        printf("%d is negative.", A); 

    else if (A == 0) 

        printf("%d is zero.", A); 
 
    return 0; 
}


// Output
// Enter the number A: 5
// 5 is positive.