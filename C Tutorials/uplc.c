#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
    }
    else
    {
        ch=ch+32;
    }
    printf("%c",ch);
    return 0;
}
