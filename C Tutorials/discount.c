#include <stdio.h>
float discount(float n);
int main()
{
    float regular;
    printf("enter the regular price");
    scanf("%f",&regular);
    float saledvalue=discount(regular);
    printf("The discounted price is %.2f\n",saledvalue);
}
float discount(float n)
{
    return n*0.85;
}
