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
/*
Pronic number is a number which is the product of two consecutive integers, that is, n=x*(x+1). 
Write a C program which, for a given input n, detect if the number is pronic or not. 
 
Some Examples: 
6: True 
42: True 
132: True 
2550: True 
10100: True 
4: False 
66: False 
133: False 
1666: False 
17289: False
*/
