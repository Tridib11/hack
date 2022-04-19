#include <stdio.h>
int main() 
{
float distance;
scanf("%f",&distance);
float meter,feet,inches,centimeters; 
meter = distance*1000;
feet = distance*3280.84;
inches = distance*39370.1;
centimeters= distance*100000;
printf("%.2f m\n",meter);
printf("%.2f ft\n",feet);
printf("%.2f in\n",inches);
printf("%.2f cm\n",centimeters);  
return 0;
}