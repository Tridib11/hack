#include <stdio.h>
int main()
{
    int number;
    printf("enter the number ");
    scanf("%i",&number);
    if(number%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}