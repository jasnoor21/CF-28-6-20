#include<stdio.h>
#include<stdlib.h>

void main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d ",&n,&k);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            arr[i]=k-(arr[i]%k);
        }
        //printf("jasnoor\n");
        /*for(int i=0;i<n;i++){
            printf("%d  ",arr[i]);
        }
        printf("\n");*/
        int brr[k];
        for(int i=0;i<k;i++){brr[i]=0;}
        for(int i=0;i<n;i++){
            brr[arr[i]]++;
        }
        int max = brr[k-1];
        int index = k-1;
        for(int i=k-1;i>=0;i--){
            if(brr[i]>max){max=brr[i];index = i;}
        }
        if(max>=1)printf("%d \n", (max-1)*k+index+1);
        else{printf("%d\n",0);}
    }

}
