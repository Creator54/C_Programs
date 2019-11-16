#include<stdio.h>
int main(){
    int a[5],b=0,c=0;
    int max=0,min=0,k=0,l=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(a[i]>=b){
            b=a[i];
            k=i;
        }
        if(i==0){
            c=a[i];
        }
        else if(a[i]<=c){
            c=a[i];
            l=i;
        }
    }
    for(int i=0;i<5;i++){
        if(i==k){
            continue;
        }
        else{
            min=min+a[i];
        }
    }
    for(int i=0;i<5;i++){
        if(i==l){
            continue;
        }
        else{
            max=max+a[i];
        }
    }
    printf("%d %d",min,max);
}

