#include <stdio.h>

int main() {
    int a, i, x;
    scanf("%d", &a);
    for (i=0,,i++){
        x = a & (1<<i);
        if(x==0){
            printf("%d", i);
            break;
        }
    }
    return 0;
}


