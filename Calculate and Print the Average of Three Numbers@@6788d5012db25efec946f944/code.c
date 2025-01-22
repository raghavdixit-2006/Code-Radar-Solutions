#include <stdio.h>

int main() {
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    float x;
    x =  (a+b+c)/3;
    printf("Average: %.2f", x);
    return 0;
}