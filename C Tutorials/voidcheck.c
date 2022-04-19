#include <stdio.h>
void meow(int n);
int main()
{
    int numberoftimes;
    printf("enter the number of times you want meow ");
    scanf("%i",&numberoftimes);
    meow(numberoftimes);
}
void meow(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("meow\n");
    }
}