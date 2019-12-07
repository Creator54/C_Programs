#include<stdio.h>
void f2(int a){
    int b=a;
    if(b!=0){
        for(int i=1;i<a;i++){
            printf("%d  ",b);
            b--;
        }
    }
    for(int i=1;i<=a;i++){
        printf("%d  ",b);
        b++;
    }
}
void main(){
    int a;
    scanf("%d",&a);
    f2(a);
}
/*
Input:
4

Output:
4 3 2 1 2 3 4
*/
