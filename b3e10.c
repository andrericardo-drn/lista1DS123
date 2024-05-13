#include <stdio.h>

int main(){
    int num=0,soma=0,cont=0;
        while(cont<50){
        scanf("%d",&num);
            if(num%2==0){
            soma+=num;
            cont++;
            }
        }
        printf("%d",soma);
}
