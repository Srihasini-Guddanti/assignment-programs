#include <stdio.h>
void main ()
{
int age;
float mo_inco;
int cscore;
printf("Enter your age:\n");
scanf("%d",&age);
printf("Enter your monthly income:\n");
scanf("%f",&mo_inco);
printf("Enter your credit score:\n");
scanf("%d",&cscore);
if(age>=21 && age<=60){
   if(mo_inco>=25000){
       if(cscore>=700){
          printf("LOAN APPROVED");
          }
       else{
          printf("LOAN REJECTED:credit score is less than 700");
          } 
          } 
   else{
   printf("LOAN REJECTED:monthly income is less than 25000");
   }  
   }
   else{
   printf("LOAN REJECTED:age is not in between 21 and 60");
   }  
   }
