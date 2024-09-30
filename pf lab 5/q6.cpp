#include <stdio.h>

int main() {
    int number, count=0;
    printf("Enter an integer");
    scanf("%d",&number);
    while (number>0){
    
    count+= (number & 1);
	    number>>=1;
}
	printf("the number of 1 is %d\n",count);
	return 0;
}
