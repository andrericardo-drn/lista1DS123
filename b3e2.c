#include <stdio.h>
int i;
int setIEqualsZero(){
    i = 0;
}
int main(){
    for(setIEqualsZero();i<100;i++){
    printf("%d USANDO FOR \n",i+1);
    }
    setIEqualsZero();
    while(i<100){
    printf("%d USANDO WHILE \n",i+1);
    i++;
    }
    setIEqualsZero();
    do{
    printf("%d USANDO DOWHILE \n",i+1);
    i++;
    }while(i<100);
}
