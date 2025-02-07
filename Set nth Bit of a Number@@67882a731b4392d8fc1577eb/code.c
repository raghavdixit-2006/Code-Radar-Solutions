#include <stdio.h>


int main() {
    int a, b, c=1;
    scanf("%d %d", &a, &b);
    printf("%d", a^(c<<b));
    return 0;
}
