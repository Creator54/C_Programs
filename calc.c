//Basic Arithmetic Operations using C//
#include<stdio.h>
void main()
{
int i,j,k;
//specifing two integer variables as i and j//
printf("Basic Calcy\n");
printf("Enter the number :\t");
scanf("%d",&i);
printf("Input operation +,-,*,/,!\n");
scanf("%d",&j);
printf("%d",j);
if (j=='+')
{
printf("Enter 2nd Number :\t");
scanf("%d",&k);
printf("Sum =\ti+k");
}
}
