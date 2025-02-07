#include <stdio.h>

int main() {
    unsigned int a,count=0;
    scanf("%lu",&a);
    while(a!=0){
        if(a==1){
            break;
        }
        a=a>>1;
        count++;
    }

    if(a==0){
        printf("%d",0);
    }
    
    else{
    printf("%d",32-count-1);
    }
    return 0;
}