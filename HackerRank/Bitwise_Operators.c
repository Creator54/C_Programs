#include<stdio.h>
int main(){
    int a,b,c=0,d=0,e=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<a;i++){
        for(int j=(i+1);j<=a;j++){
            if((i&j)>c && (i&j)<b){
                c=i&j;
            }
            if((i|j)>d && (i|j)<b){
                d=i|j;
            }
            if((i^j)>e && (i^j)<b){
                e=i^j;
            }
        }
    }
    printf("%d\n%d\n%d",c,d,e);
}
/*
Input:
4 3        //4-till which no. the operation should execute;3-till which max. value it should show/store

Output:
2          //max. AND value <3
0          //max. OR value <3
2          //max. XOR value <3
*/
