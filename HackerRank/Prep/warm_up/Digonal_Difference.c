#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a][a],c=0,d=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&b[i][j]);
            if(i==j){
                c=c+b[i][j];
            }
        }
    }
    int j=a-1;
    for(int i=0;i<a;i++){
        d=d+b[i][j];
        j--;
    }
    ((c-d)>0)?printf("%d",c-d):printf("%d",-(c-d));
    return 0;
}
/*
Input:
3
1 2 3
4 5 6
7 8 9

Output:
0
*/
