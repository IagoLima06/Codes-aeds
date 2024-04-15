#include <stdio.h>

int main(){
    int num,cont=0;

    scanf("%d",&num);

    for(int i=1;i<=num;i++){
       if ((num%i)==0){
        cont ++;
       }
    }
    if(cont>2){
        printf("nao primo");
    }else{
        printf("primo");
        }

}




