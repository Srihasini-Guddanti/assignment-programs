#include <stdio.h>
void main()
{
int mbship;
float order;
printf("Enter the order amount:\n");
scanf("%f",&order);
printf("Do you have premium membership:\n (enter 1 if yes and 0 if no)\n");
scanf("%d",&mbship);
if(order>=500){
     if(mbship==1){
     printf("Final amount=%f",0.9*order);
     }
     else if(mbship==0){
     printf("Final amount=%f",order);
     }
     else{
     printf("INVALID MEMBERSHIP STATUS");
     }
     }
else if(order>0 && order<500){
     if(mbship==1 || mbship==0){
     printf("Final amount=%f",50+order);
     }
     else{
     printf("INVALID MEMBERSHIP STATUS");
     }
     }
else{
printf("INVALID ORDER AMOUNT");
}     
}