#include<stdio.h>
#include<stdlib.h>



void main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long int a;int b=0;
        scanf("%ld",&a);
        while(1){
            if(a%6==0 ){b++; a= a/6;continue;}
            if(a%3==0 ){b=b+2; a=a/3;continue;}
            break;
        }
        if(a==1)printf("%d\n",b);
        else{printf("%d\n", -1);}
    }


}
