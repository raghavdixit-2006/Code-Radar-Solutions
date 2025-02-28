#include <stdio.h>

int main(){
    int n,i;
    char j = 'A';
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j = 'A';j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}