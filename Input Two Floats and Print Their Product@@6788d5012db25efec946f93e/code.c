#include <stdio.h>

int main() {
    float x, y;
    scanf("%f %f", &x, &y);
    x *= y;
    printf("%.2f", x);
    return 0;
}