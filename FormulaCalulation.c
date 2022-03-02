#include <stdio.h>

main(){
int Value1, Value2;
int Sub, Sum, Mul;
float Div;

printf("Enter Value 1: ");
scanf("%d", &Value1);
printf("Enter Value 2: ");
scanf("%d", &Value2);

Sum = Value1 + Value2;
Sub = Value1 - Value2;
Mul = Value1 * Value2;
Div = Value1 / Value2;

printf("\n %d + %d = %d", Value1, Value2, Sum);
printf("\n %d - %d = %d", Value1, Value2, Sub);
printf("\n %d * %d = %d", Value1, Value2, Mul);
printf("\n %d / %d = %.2f", Value1, Value2, Div);

}
