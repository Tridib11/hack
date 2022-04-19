#include <stdio.h>
int main()
{
    int testnum1,testnum2;
    scanf("%d",&testnum1);
    scanf("%d",&testnum2);
    printf("Addition = %d\n",testnum1+testnum2);
    printf("Substraction = %d\n",testnum1-testnum2);
    printf("Multiplication = %d\n",testnum1*testnum2);
    printf("Division = %.3f\n",(float)testnum1/(float)testnum2);
    printf("Modulous = %d\n",testnum1%testnum2);
    return 0;
}