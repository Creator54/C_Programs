/*
Input: 4
Output:
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
/*
Logics(L):
Divided whole problem into two halves(same logic for both the halves).

1.Create logic for no. of times and the value which needs to be printed.

4 4 4 4 4 4 4
3 3 3 3 3
2 2 2 
1

2.Create logic for filling the left(same for right)

4 4 4 4 4 4 4
4 3 3 3 3 3
4 3 2 2 2
4 3 2 1

after appling on right

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4

2.1.Copy pasted 1 & 2 with minor changes
3.FInally complete :)
*/
#include<stdio.h>
int a;
int first_half(int value,int k){
//step L.2(left)
    int p=a;
    if(value!=a){
        while(p!=value){
            printf("%d ",p);
            p--;
        }
    }
//step L.1
    for(int i=0;i<k;i++){
        printf("%d ",value);
    }
//step L.2(right)
    if(value!=a){
        while(p!=a){
            p++;
            printf("%d ",p);
        }
    }
    value--;
    return value;
}
int second_half(int value,int k){
//step L.2(left)
    int p=a;
    if(value!=a){
        while(p!=value){
            printf("%d ",p);
            p--;
        }
    }
//step L.1
    for(int i=0;i<k;i++){
        printf("%d ",value);
    }
//step L.2(right)
    if(value!=a){
        while(p!=a){
            p++;
            printf("%d ",p);
        }
    }
    value++;
    return value;
}
int main(){
    scanf("%d",&a);
    int k=2*a-1,value=a;
    for(int i=0;i<=(2*a-1)/2;i++){
        value=first_half(value,k);
        k=k-2;
        printf("\n");
    }
    value=2,k=1;
    for(int i=(2*a-1)/2;i>0;i--){
        k=k+2;
        value=second_half(value,k);
        printf("\n");
    }
}
