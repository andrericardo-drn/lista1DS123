#include <stdio.h>

int main(){
    int num=0,pares=0,numLidos=0;
    for(int i=0;i<999;i++){

        scanf("%d",&num);
        numLidos++;
        if(num%2==0){
            pares++;
        }
        if(num==1000){
            break;
        }


    }
    printf("%d \n",pares);
    printf("%d \n",numLidos);

}
