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
        printf("O n�mero � inv�lido");
    }
    else{
        printf("numero fornecido � zero.");
    }

}
