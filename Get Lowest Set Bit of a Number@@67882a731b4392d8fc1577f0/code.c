#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    for (i=0,i<5,i++){
        printf("%d", a^(1<<i));
    }
    return 0;
}