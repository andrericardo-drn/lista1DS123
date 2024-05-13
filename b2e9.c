#include <stdio.h>

int main(){

float salario,valorEmprestimo;
scanf("%f",&salario);
scanf("%f",&valorEmprestimo);
    if(valorEmprestimo > salario*0.2){
        printf("Empréstimo não concedido.");

    }
    else{
        printf("Empréstimo concedido.");
    }
}
