#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    float c=0,d=0,e=0;
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        if(b[i]>0){
            c++;
        }
        else if(b[i]<0){
            d++;
        }
        else{
            e++;
        }
    }
    printf("%f\n%f\n%f",c/a,d/a,e/a);
}

