#include<stdio.h>

main(){
int Value1, Value2, Sum;
float Avg;
printf("Enter Value 1 : ");
scanf("%d", &Value1);
printf("Enter Value 2 : ");
scanf("%d", &Value2);
Sum = Value1 + Value2;
Avg = Sum/2;
printf("\nValue1 = %d", Value1);
printf("\nValue2 = %d", Value2);
printf("\nSum = %d", Sum);
printf("\nAverage = %.2f", Avg);

}
