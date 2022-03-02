#include <stdio.h>

main(){
float C, F;
/*
printf("Enter temperature in Celcius: ");
scanf("%f", &C);
F = 9*C/5 + 32;
printf("The temperature in Farenheit is: %.2f", F);
*/

printf("Enter temperature in Farenheit: ");
scanf("%f", &F);
C = 5 * (F-32)/9;
printf("The temperature is Celcius is: %.2f", C);
}
