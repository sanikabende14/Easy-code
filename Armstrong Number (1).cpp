#include <stdio.h>
#include <math.h>
int main() {
    int n, sum=0, temp, digits=0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp=n;

    while(temp>0) { digits++; temp/=10; }
    temp=n;

    while(temp>0) {
        sum += pow(temp%10, digits);
        temp/=10;
    }

    if(sum==n) printf("Armstrong Number\n");
    else printf("Not Armstrong\n");

    return 0;
}