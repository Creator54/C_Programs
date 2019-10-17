/*
Input : Triplet of three numbers (a,b,c)
Output : 1 if a>b>c
              0, otherwise
*/
#include<stdio.h>
void main(){
  int i,j,k;
  scanf("%d%d%d",&i,&j,&k);
  if(i>j && j>k)
    printf("1");
  else
    printf("0");
}
