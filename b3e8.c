#include <stdio.h>
int main(){
    int x=0,num,maior=0,menor=0;
    for(x;x<10;x++){
    scanf("%d",&num);
        if(x==0){
            maior=num;
            menor=num;
        }
        if(num>maior){
            maior=num;
        }else if(num<menor){
            menor=num;
        }
    }

    printf("maior num lido -> %d \n",maior);
    printf("menor num lido -> %d",menor);
}
