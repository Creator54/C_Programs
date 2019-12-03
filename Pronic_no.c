//Pronic number :
//a no. which is a product of two consecutive numbers is x(x+1)
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i*(i+1)==a){
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}
