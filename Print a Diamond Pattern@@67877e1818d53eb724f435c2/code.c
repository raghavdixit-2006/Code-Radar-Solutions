#include <stdio.h>

int main(){
    int n,i,j,k;
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-1;j--){
            printf(" ");
        }
        for(k=1;k<=(n*2)-1;k++){
            printf("*");
        }
        printf("\n");
    }
}