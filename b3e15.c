#include <stdio.h>

int main(){
    int num=0,cont=0;
    scanf("%d",&num);
    if(num%2!=0 && num>0){
    while(cont<num){
        if(cont%2!=0){
            printf("%d \n",cont);
        }
        cont++;
    }
    }
}
