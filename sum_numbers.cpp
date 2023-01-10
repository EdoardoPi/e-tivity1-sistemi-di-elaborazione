#include <stdio.h>

int main(void)
{
    int firstNumber;
    int secondNumber;
    int finalSum;
    printf("Insert the first number\n");
    scanf("%d", &firstNumber);
    printf("Insert the second number\n");
    scanf("%d", &secondNumber);
    finalSum = firstNumber + secondNumber;
    if (firstNumber > secondNumber)
    {
        printf("The first number is biggher than the secod one\n and the sum is: %d\n", finalSum);
    }
    else
    {
        printf("The second number is biggher than the first one\n and the sum is: %d\n", finalSum);
    }

    return 0;
}