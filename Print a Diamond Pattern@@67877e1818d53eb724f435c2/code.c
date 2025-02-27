#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=1;i<a+1; i++){
        for (int j=a;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<(i*2-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=a;i>0; i--){
        for (int j=a;j>i-1;j--){
            printf(" ");
        }
        for(int k=i*2;k>=i;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}