#include <stdio.h>

int main(){
    int num1=0,num2=0,maior=0,menor=0,soma=0,mult=1,cont=0;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1>num2){
        maior=num1;
        menor=num2;
    }
    else{
        maior=num2;
        menor=num1;
    }
    printf("maiornum  -> %d \n",maior);
    printf("menornum  -> %d \n",menor);
    for(cont=menor;cont<=maior;cont++){
        if(cont%2==0){
            soma+=cont;
        }
        else{
            mult*=cont;
        }
    }
    printf("soma dos numeros pares nesse intervalo -> %d \n",soma);
    printf("multiplicacao dos numeros impares nesse intervalo -> %d \n",mult);

}
