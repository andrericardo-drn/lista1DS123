#include <stdio.h>
#include <math.h>

int main() {
    int num=0,loop=1;
    float log=0,i=0;
    scanf("%d",&num);
    if(num<0){
        printf("num invalido");
    }
    else{
        do{
            printf("testando... i = %f \n",i);
            if(pow(10, i) == num){
                log=(float)i;
                break;
            }
            else if(i>100){
                printf("nao achou");
            }
            i+=0.0010;
        }while(loop);
        printf("Logaritmo de %d na base 10 --> %.3f",num,log);
    }
}
