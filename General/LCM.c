//LCM
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int i=a;
    if(a>b){
        while(i%a!=0 || i%b!=0){
            i++;
        }
    }
    else {
        i=b;
        while(i%a!=0 || i%b!=0){
            i++;
        }
    }
    printf("%d",i);
    return 0;
}
