#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("width \n");
        scanf("%i", &n);
    } while (n<1);
    for(int i=0;i<n;i++)
    {
        printf("?");

    }
   
}
