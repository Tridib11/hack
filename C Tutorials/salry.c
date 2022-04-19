#include<stdio.h>
int main()
{
    int n;
    float DA,HRA,netsalry;
    printf("Enter the basic pay \n");
    scanf("%d",&n);
    netsalry = (0.75*n)+(0.10*n)+n;
    printf("Netsalry = %.2f \n",netsalry);
    return 0;

}