#include <stdio.h>
float discount(float price,int percentage);
int main()
{
    float regular;
    int percents;
    printf("enter the regular price");
    scanf("%f",&regular);    
    printf("enter the sale percentage ");
    scanf("%i",&percents);
    float sale=discount(regular,percents);
    printf("sale %.2f\n",sale);
} 
float discount(float price,int percentage)
{
    return price*(100-percentage)/100;
}