#include<stdio.h>
int main (){
    int a;
    bool isprime=true;
    scanf("%d",&a);
    for(int i=2;i<=n;i++){
        if(a%i==0){
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