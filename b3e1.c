#include <stdio.h>

int main(){
  int max=0;
  int i=0;
  do{
    if(i%3==0){
        printf("%d \n",i);
        max++;
    }
    i++;
  }while(max<5);
}
