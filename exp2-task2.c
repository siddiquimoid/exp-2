#include <stdio.h>

int main()
{
    int num1, num2, i, sum = 0;

    printf("Enter first number = ");
    scanf("%i", &num1);
    printf("Enter second number = ");
    scanf("%i", &num2);

    for (i = num1; i <= num2; i++) {
        if (i % 2 != 0) {
            sum += i; 
        }
    }

    printf("\nSum of odd numbers between %i and %i is = %i\n", num1, num2, sum);
    return 0;
}
