#include <stdio.h>

int main(){
    int num=0,i=0;
    scanf("%d",&num);
    for(i;i<num;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}
