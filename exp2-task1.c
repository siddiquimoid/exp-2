#include <stdio.h>
int main()
{
    
    int num;
    printf("Enter a number = ",num);
    scanf("%i",&num);
    (num %2 == 0)? printf("The entered number is even")
                :  printf("The entered number is odd");
    (num %2 == 0)? num++ : num--;

}
