#include<stdio.h>
void f1(int a){
    for(int i=1;i<2*a;i++){
        printf("%d  ",a);
    }
    printf("\n");
    if(a!=2){
        printf("%d  ",a);
        for(int i=1;i<2*a-2;i++){
            printf("%d  ",a-1);
        }
        printf("%d\n",a);
    }
}
void mid(int a){
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
    printf("\n");
}
void f2(int a){
    printf("%d  ",a);
    for(int i=1;i<2*a-2;i++){
        printf("%d  ",a-1);
    }
    printf("%d\n",a);
}
void f3(int a){
    printf("%d  ",a);
    for(int i=1;i<2*a-2;i++){
        printf("%d  ",a-1);
    }
    printf("%d\n",a);
    for(int i=1;i<2*a;i++){
        printf("%d  ",a);
    }
}
int main(){
    int a;
    scanf("%d",&a);
    if(a!=1){
        f1(a);
        for(int i=1;i<=a-3;i++){
            f2(a);
        }
        if(a>2){
            mid(a);
        }
        for(int i=1;i<=a-3;i++){
            f2(a);
        }
        f3(a);
    }
    else{
        printf("1");
    }
}
/*
Input:
4
Output:
4  4  4  4  4  4  4
4  3  3  3  3  3  4
4  3  3  3  3  3  4
4  3  2  1  2  3  4
4  3  3  3  3  3  4
4  3  3  3  3  3  4
4  4  4  4  4  4  4
