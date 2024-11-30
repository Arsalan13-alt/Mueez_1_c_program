#include<stdio.h>
int main(){ 
  float celsius,kelvin, Fahrenheit;
  printf("Enter the temperature in celsius:");
  scanf("%f",&celsius);
  kelvin=celsius+273.15;
  Fahrenheit=(celsius*9/5)+32;
  printf("The temperature in kelvin is %f\n",kelvin);
  printf("The temperature in Fahrenheit is %f\n", Fahrenheit);
  return 0;
}
