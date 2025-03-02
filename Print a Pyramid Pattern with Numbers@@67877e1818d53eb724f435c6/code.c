#include <stdio.h>

int main(){
    int n=5,i,j,k;
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            printf(" ");
        }
        for(k=1;k<=(i*2)-1;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}
