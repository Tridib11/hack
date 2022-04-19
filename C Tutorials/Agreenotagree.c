#include <stdio.h>
int main()
{
    char c;
    printf("enter your response ");
    scanf("%c",&c);
    if(c=='y'||c=='Y')
    {
        printf("Agreed\n");
    }
    else
    {
        printf("Not agreed\n");
    }
}