#include <stdio.h>
int main() {
    int n, i;
    float sum=0, num;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    printf("Average = %.2f", sum/n);
    return 0;
}