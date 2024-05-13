#include <stdio.h>

int main(){
    int cont=0,i=0,num=0,maior=0,contMaior=0;
    scanf("%d",&cont);
    for(i;i<cont;i++){
        scanf("%d",&num);
        if(i==0){
        maior=num;
        }
        if(num>maior){
            maior=num;
            contMaior=0;
        }
        if(num==maior){
            contMaior++;
        }
    }
    printf("%d, %d\n",maior,contMaior);
}
