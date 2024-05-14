#include <stdio.h>
#include <stdbool.h>

int main(){
  bool loop=true;
  float num=0,soma=0,cont=0;
  while(loop){
    scanf("%f",&num);
    if(num<10 || num>20){
        loop=false;
    }
    else if(!(num<10 || num>20)){
        soma+=num;
        cont++;
        }
  }
  if(!loop){
    printf("Valor nao valido como nota de aprovacao. \nsaindo do programa.");
  }
  else{
    printf("%0.0f",soma/cont);
  }
}
