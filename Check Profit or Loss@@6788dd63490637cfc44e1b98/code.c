#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b-a>0){
        printf("Profit");
    }
    if (b-a==0){
        printf("No Profit No Loss");
    }
    if (b-a<0){
        printf("Loss");
    }
    return 0;
}