#include <stdio.h>
int main()
{
    
    int num1,num2,i,sum=0;

    printf("Enter a number = ");
    scanf("%i",&num1);
    printf("\nEnter a number = ");
    scanf("%i",&num2);
    
    for(i=num1; i<=num2; i++){
        if(i %2 !=0){
            sum==i;
        }
    }
    printf("\nSum of odd number is = %i",sum);
    return 0;
}
