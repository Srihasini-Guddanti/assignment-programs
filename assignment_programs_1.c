#include <stdio.h>
void main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
if(num==0){
printf("this number is zero");
}
else if(num>0){
printf("this number is positive");
}
else{
printf("this number is negative");
}
}