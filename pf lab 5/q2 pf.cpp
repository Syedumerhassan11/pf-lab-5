#include <stdio.h>

int main() {
	int a1,a2,a3;
	printf("Enter the angles of the triangle(angles must be positive): ");
    scanf("%d %d %d", &a1, &a2, &a3);
    if(a1>0 && a2>0 && a3>0){
    if(a1+a2+a3==180)
            printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
