#include <stdio.h>
int main(){
	int sum=0;
	int digit=0;
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	digit=num%10;
	num=num/10;
	sum+=digit;
	digit=num%10;
	num=num/10;
	sum+=digit;
	digit=num%10;
	num=num/10;
	sum+=digit;
	printf("The single digit sum is %d\n",sum);
	return 0;
	}
