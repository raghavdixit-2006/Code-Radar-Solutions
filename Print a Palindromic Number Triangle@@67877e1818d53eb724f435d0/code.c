#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=1;i<a+1; i++){
        for (int j=a;j>i;j--){
            printf(" ");
        }
        for(int k=1;k<(i*2-1);k++){
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}