#include <stdio.h>

int main(){
    int n, i=0, b[40];
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
    }
    while (n > 0) {
        b[i] = n % 2; 
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", b[j]);
    }
    return 0;
}

