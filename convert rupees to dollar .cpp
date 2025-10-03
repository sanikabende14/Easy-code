#include <stdio.h>
int main() {
    float rs, dollar;
    printf("Enter amount in Rupees: ");
    scanf("%f", &rs);
    dollar = rs / 83.0; // approx rate
    printf("Amount in Dollars = %.2f", dollar);
    return 0;
}