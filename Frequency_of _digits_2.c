#include<stdio.h>
int main(){
 int n, i = 0; 
 int a[10] ={0};
 scanf("%d",&n);
 while(n!= 0)
 {
  a[n%10]++; 
  n /= 10;
 }
 for(i = 0; i < 10; i ++)
 printf("Frequence of %d is %d\n",i,a[i]);
 return 0;
}
