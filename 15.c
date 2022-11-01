// Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include <stdio.h>
int main()
{
    int side1, side2, side3;

    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    
    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2) 
            {                
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}


// Input
//  Enter three sides of triangle:
//  7
//  10
//  5

// Output
// Triangle is valid