#include<stdio.h>
#include<stdlib.h>

void main(){
int t;
scanf("%d",&t);
while(t--){
    int x,y,n,k;
    scanf("%d %d %d",&x,&y,&n);
    int rem = n%x;
    if(rem>=y){
        k = n - (rem - y);
    }
    if(rem<y){
        k = n - x +(y-rem);
    }
    printf("%d\n",k);
}

}
