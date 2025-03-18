#include<stdio.h>
#include<stdbool.h>
int main (){
    int a;
    bool isprime=true;
    scanf("%d",&a);

        if (a<=1){
            isprime=true;
        }
        else if(a==2){
            isprime=true;
        }
       else if(a%2==0){
        isprime=false;
       }
       else{
        for(int i=3;i*i<=a;i+=2){
            if(a%i==0){
                isprime=false;
                break;
            }
        }
       }
       if(isprime==true){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    }
    
