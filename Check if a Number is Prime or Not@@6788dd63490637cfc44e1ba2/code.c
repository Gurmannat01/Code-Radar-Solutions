#include<stdio.h>
#include<stdbool.h>
int main (){
    int a;
    bool isprime=true;
    scanf("%d",&a);
    for(int i=2;i<=a;i++){
        if (a<=1){
            isprime=true;
        }
        else if(a==2){
            isprime=true;
        }
       else if(a%i==0){
            isprime=false;
        }
        else{
            isprime=true;
        }
    }
    if(isprime==true){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}