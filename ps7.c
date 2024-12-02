#include <stdio.h>

int main(){
    int num;
    puts("entre your num");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++){
        if(num % i == 0){
            printf("le num %d divisoure de %d \n",i,num);
        }
    }
    return 0 ;
}