#include <stdio.h>
#include <math.h>
int main(){

float num;
scanf("%f",&num);
    if(num>0){
        float raizNum;
        raizNum=sqrt(num);
    }
    else if(num<0){
        printf("O número é inválido");
    }
    else{
        printf("numero fornecido é zero.");
    }

}
