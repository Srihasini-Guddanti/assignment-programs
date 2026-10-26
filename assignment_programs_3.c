#include <stdio.h>
void main()
{
int age;
printf("Enter your age:\n");
scanf("%d",&age);
if(age>=0 && age<18){
printf("you are not eligible to vote");
}
else if(age>=18){
printf("you are eligible to vote");
}
else{
printf("invalid age");
} 
}