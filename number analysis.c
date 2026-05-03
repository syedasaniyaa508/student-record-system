#include <stdio.h>

int main()
{
    int num, temp, rem, rev = 0, sum = 0, i, prime = 1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    temp = num;

    // Prime Check
    if(num <= 1)
        prime = 0;
    else
    {
        for(i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    // Palindrome Check + Sum of Digits
    while(temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        sum = sum + rem;
        temp = temp / 10;
    }

    printf("\n--- Number Analysis ---\n");

    // Even/Odd
    if(num % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    // Positive/Negative
    if(num >= 0)
        printf("Positive Number\n");
    else
        printf("Negative Number\n");

    // Prime
    if(prime == 1)
        printf("Prime Number\n");
    else
        printf("Not Prime Number\n");

    // Palindrome
    if(num == rev)
        printf("Palindrome Number\n");
    else
        printf("Not Palindrome Number\n");

    printf("Sum of Digits = %d\n", sum);

    return 0;
}
