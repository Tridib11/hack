#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    switch(a)
    {    
        case 'a' : printf("a is entered");break;
        case 'b' : printf("b is entered");break;
        case 'c' : printf("c is entered");break;
        case 'd' : printf("d is entered");break;    
        default : printf("Works only till a to d");
    }
    return 0;
}
