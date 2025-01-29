#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a>>b;
    (c&1)? printf("1"):printf("0");
    return 0;
}