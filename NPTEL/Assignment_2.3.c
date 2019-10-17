/*
You are given a sequence of non-negative integers terminated by -1.
You have to output 1 if there are atleast 2 distinct elements in the sequence and 0 if the sequence consists of only 1 integer.
Note that -1 is not part of the sequence.
The sequence is not necessarily sorted.
Note: Don't use arrays to this question
*/
#include<stdio.h>
void main(){
    int i,j,k;
    scanf("%d%d",&i,&j);
    if(j==-1)
    printf("0");
    else if(i==j){
        while(i==j){
            scanf("%d",&j);
        }
        if(j==-1)
        printf("0");
        else
        printf("1");
    }
    else
    printf("1");
}
