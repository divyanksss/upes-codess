#include <stdio.h>

int main (){
  float num1, num2;
  float  addition, subtraction, multiplication, division;
  printf("Enter first number:");
  scanf("%f", &num1);
  printf("Enter second number:");
  scanf("%f", &num2);
  addition = num1 + num2; 
subtraction = num1 - num2;
multiplication = num1 * num2;
division = num1 / num2;
printf("addition: %.2f\n", addition);
printf("subtraction: %.2f\n", subtraction);
printf("multiplication: %.2f\n", multiplication);
printf("division: %.2f\n", division);
return 0;
}