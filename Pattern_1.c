
#include<stdio.h>
void pattern(int a,int b){
    int i;
    for(i=0;i<b;i++){
        printf("%d",a);
    }
    printf("\n");
}
void main(){
    int i,j,k;
    scanf("%d",&i);
    j=i+(i-1);
    pattern(i,j);
    for(k=0;k<j && i!=1;k++){
        i--;
        pattern(i,j);
    }
}
/*
Output:

7                                                                                                                               
7777777777777                                                                                                                   
6666666666666                                                                                                                   
5555555555555                                                                                                                   
4444444444444                                                                                                                   
3333333333333                                                                                                                   
2222222222222                                                                                                                   
1111111111111

*/
