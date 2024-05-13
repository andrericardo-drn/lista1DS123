#include <stdio.h>

int main(){
    int num=0,digits[3];
    scanf("%d",&num);
    if(num>100 && num<999){
        for(int i=0; i<sizeof(digits) / sizeof(digits[0]); i++){
            digits[i]=num%10;
            num=num/10;
        }
        for(int i=(sizeof(digits) / sizeof(digits[0]))-1; i>=0; i--){
            printf("%d \n",digits[i]);
        }
    }
}
