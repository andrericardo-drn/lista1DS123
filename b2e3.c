#include <stdio.h>
#include <math.h>

int main(){

float num;
scanf("%f",&num);
    if(num>0){
        printf("%.2f",sqrt(num));
    }
    else{
        printf("%.2f",(num*num));
    }

}
