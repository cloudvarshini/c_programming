#include <stdio.h>
int main() 
{
  int number, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &number);
    original = number;

    // reversed integer is stored in reversed variable
    while (number != 0) 
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    // if orignal and reversed are equal
    if (original == reversed)
    {
        printf("%d is a palindrome.\n", original);
    }    
    else
        {
            printf("%d is not a palindrome.\n", original);
        }
    return 0;
}