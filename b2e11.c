#include <stdio.h>

int main() {
    int num=0,soma=0,numog,digito=0;
    scanf("%d", &num);
    numog=num;
    if (num<=0){
        printf("Numero invalido \n");
    }
    while (num>0){
        digito= num % 10;
        soma+= digito;
        num/= 10;
    }
    printf("%d",soma);
    return 0;
}
