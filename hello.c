
#include <stdio.h>

int main()
{
    int numberOne = 0;
    int numberTwo = 0;
    int result = 0;

    printf("Enter your first number: ");
    scanf("%d", &numberOne);

    printf("Enter your second number: ");
    scanf("%d", &numberTwo);

    result = numberOne + numberTwo;

    printf("Sum is: \n");
    printf("%d + %d = %d", numberOne, numberTwo, result);
}
