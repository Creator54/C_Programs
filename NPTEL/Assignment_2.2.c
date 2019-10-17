/*

You are given a sorted (either in the increasing or in the decreasing order) sequence of numbers, ending with a -1. You can assume that are at least two numbers before the ending -1. 
Let us call the sequence x0  x1 ... xn -1.
You have to output the number of distinct elements in the sorted sequence.
Kindly do not use arrays in the code.
*/
#include<stdio.h>
void main(){
    int i,j,count=0;
    scanf("%d",&j);
    while(!(j==-1)){
        i=j;
        scanf("%d",&j);
        if(!(j==i) && !(j==-1))
        count++;
    }
    printf("%d",count+1);
}
