#include <stdio.h>
void main()
{
float w;
float h;
printf("Enter your weight:\n");
scanf("%f",&w);
printf("Enter your height:\n");
scanf("%f",&h);
float k=h*h;
float BMI=w/k;
printf("BMI=%f",BMI);
if(BMI<18.5){
printf("Underweight");
}
else if(BMI>=18.5 && BMI<25){
printf("Normal");
}
else if(BMI>=25 && BMI<30){
printf("Overweight");
}
else if(BMI>=30){
printf("Obese");
}
}