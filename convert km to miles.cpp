
#include <stdio.h>
int main() {
    float km, miles;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    miles = km * 0.621371;
    printf("Distance in miles = %.2f", miles);
    return 0;
}