#include<stdio.h>
#include<stdlib.h>

void main(){
    int t;
    char c;
    scanf("%d",&t);
    while(t--){
        int n;
        int a=0;int b=0;
        scanf("%d",&n);
        char arr[n];
        scanf("%s",arr);
        for(int i=0;i<n;i++){
            if(arr[i]=='(')a++;
            if(arr[i]==')')a--;
            if(a<0){b++;a=0;}
        }
        printf("%d \n",b);
    }
}
