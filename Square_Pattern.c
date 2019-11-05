#include<stdio.h>
void f1(int a){
    for(int i=1;i<2*a;i++){
        printf("%d ",a);
    }
    printf("\n%d ",a);
    for(int i=1;i<2*a-2;i++){
        printf("%d ",a-1);
    }
    printf("%d\n",a);
}
void f2(int a){
    printf("%d ",a);
    for(int i=1;i<2*a-2;i++){
        printf("%d ",a-1);
    }
    printf("%d\n",a);
}
void f3(int a){
    printf("%d ",a);
    for(int i=1;i<2*a-2;i++){
        printf("%d ",a-1);
    }
    printf("%d\n",a);
    for(int i=1;i<2*a;i++){
        printf("%d ",a);
    }
}
int main(){
    int a;
    scanf("%d",&a);
    f1(a);
    for(int i=1;i<2*a-4;i++){
        f2(a);
    }
    f3(a);
}
/*
Input:
4

Output:
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 3 3 3 3 4
4 3 3 3 3 3 4
4 3 3 3 3 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
