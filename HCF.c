//HCF
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int i,hcf;
    if(a<b){
        for(i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                hcf=i;
            }
        }
    }
    else{
        for(i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                hcf=i;
            }
        }
    }
    printf("%d",hcf);
    return 0;
}
