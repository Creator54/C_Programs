/*
 You will be given 3 integers as input. The inputs may or may not be
 different from each other.

You have to output 1 if all three inputs
 are different from each other,
and 0 if any input is repeated more
 than once.



Input
-----
Three integers on three lines.



Output
------
1 if the three inputs are different from each other
, 0 if some input is repeated more than once
*/
#include<stdio.h>
void main(){
  int i,j,k;
  scanf("%d%d%d",&i,&j,&k);
  if(i==j || j==k || k==i)
    printf("0");
  else
    printf("1");
}
  
