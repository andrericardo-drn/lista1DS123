#include <stdio.h>
#include <stdbool.h>

int main(){
  bool leave=1;
  float num=0,soma=0,cont=0;
  while(leave == 1){
    scanf("%f",&num);
    if(num<10 || num>20){
        leave=0;

    }
    else if(!(num<10 || num>20)){
        soma+=num;
        cont++;
        }
  }
  printf("%.1f",soma/cont);
}
