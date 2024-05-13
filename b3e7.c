#include <stdio.h>
int main(){
    int x=0,num,media=0;
    while(x<10){
        scanf("%d",&num);
        if(num>0){
        media+=num;
        media=media/10;
        }
        printf("media atual (%d input de 10)-> %d \n",x+1,media);
        x++;
    }
    printf("media final -> %d",media);
}
