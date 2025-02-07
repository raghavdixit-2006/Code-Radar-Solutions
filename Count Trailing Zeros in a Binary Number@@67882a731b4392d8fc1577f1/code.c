#include <stdio.h>

int main() {
    int a, count=0;
    scanf("%d", &a);
    while (a!=0){
        if (a&1 == 1){
            break;
        }
        a = a<<1;
        count++;
    }
    if (a==0){
        printf("%d", a);
    }
    else{
        printf("%d", count);
    }
    return 0;
}