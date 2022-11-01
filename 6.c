// Write a C program to check whether a year is leap year or not.

#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }

   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }

   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }

   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}


// Output 1
// Enter a year: 1900
// 1900 is not a leap year.

// Output 2
// Enter a year: 2012
// 2012 is a leap year.