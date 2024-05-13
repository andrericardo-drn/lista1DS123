#include <stdio.h>
#include <stdbool.h>

int main(){

float altura;
char resposta[4];
bool eh_homem=1;
scanf("%f",&altura);
printf("VOCE E HOMEM POR ACASO");
scanf("%s", resposta);
    if (strcmp(resposta, "nao")==0) {
        eh_homem = false;
    }
    if(eh_homem){
        printf("VOCE E HOMEM");
        printf("%.2f",(72.7 * altura) - 58);
    }
    else{
        printf("VOCE E MULHER");
        printf("%.2f",(62.1 * altura) - 44.7);
    }
}
