#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a<0){
        printf("Negative");
    }
    if(a==0){
        printf("Zero");
    }
    else{
        printf("Positive");
    }
    return 0;
}