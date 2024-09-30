#include <stdio.h>
int main(){
int age;
char citizenship_status;
printf("enter your age:");
scanf(" %d",&age);
printf("enter your citizenship status (c for citizen and n for non citizen:");
scanf(" %c",&citizenship_status);
if(age>=18 && citizenship_status=='c')	
printf("You are eligible to vote");
else
printf("You are not eligible to vote");
return 0;	
}
