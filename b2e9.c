#include <stdio.h>

int main(){

float salario,valorEmprestimo;
scanf("%f",&salario);
scanf("%f",&valorEmprestimo);
    if(valorEmprestimo > salario*0.2){
        printf("Empr�stimo n�o concedido.");

    }
    else{
        printf("Empr�stimo concedido.");
    }
}
