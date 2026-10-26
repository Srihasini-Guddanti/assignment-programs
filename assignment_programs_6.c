#include <stdio.h>
void main ()
{
int user;
int password;
printf("Enter your user name:\n");
scanf("%d",&user);
printf("Enter your password:\n");
scanf("%d",&password);
if(user==101){
    if(password==4321){
     printf("LOGIN SUCCESSFUL");
    }
    else{
    printf("INCORRECT PASSWORD");
    }
    }
else{
printf("User not found");
}    
}
