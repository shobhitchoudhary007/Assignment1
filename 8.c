// Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    if (lowercase_vowel==c || uppercase_vowel==c)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}


// Input
// Enter an alphabet: G
// Output
// G is a consonant.