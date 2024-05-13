#include <stdio.h>


int main(){

float nota1,nota2;
scanf("%f",&nota1);
scanf("%f",&nota2);
    if((nota1 >= 0.0 && nota1 <= 10.00) && (nota2 >= 0.0 && nota2 <= 10.00)){
        printf("%.2f",(nota1+nota2)/2);
    }
    else{
        printf("Uma das notas é inválida.");
    }
}
