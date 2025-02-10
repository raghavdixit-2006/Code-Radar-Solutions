#include <stdio.h>

int main() {
    int a, c, b;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d", a);
    }
    if(b>a && b>c){
        printf("%d", b);
    }
    if(c>b && c>a){
        printf("%d", c);
    }
    else{
        printf("%d", a);
    }
    return 0;
}