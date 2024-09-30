#include <stdio.h>

int main() {

    float purchaseAmount;
    char membershipStatus;
    char discountEligible;

   
    printf("Enter the purchase amount: $");
    scanf("%f", &purchaseAmount);

    
    printf("Do you have a membership? (y for yes, n for no): ");
    scanf(" %c", &membershipStatus);

  
    discountEligible = (purchaseAmount > 100 && membershipStatus == 'y') ? 'Y' : 'N';

  
    if (discountEligible == 'Y') {
        printf("You are eligible for a discount.\n");
    } else {
        printf("You are not eligible for a discount.\n");
    }

    return 0;
}

