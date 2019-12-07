#include<stdio.h>
int a;
void f1(int b[]){
    printf("%d %d %d %d %d",b[0],b[1],b[2],b[3],b[4]);
}
int main(){
    int b[]={1,2,3,4,5};
    f1(b);
    return 0;
}
