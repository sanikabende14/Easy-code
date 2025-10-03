#include <stdio.h>
int main() {
    int sec, h, m, s;
    printf("Enter seconds: ");
    scanf("%d", &sec);
    h = sec/3600;
    m = (sec%3600)/60;
    s = sec%60;
    printf("%d Hours %d Minutes %d Seconds", h, m, s);
    return 0;
}