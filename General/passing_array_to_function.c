#include<stdio.h>
int *f1(int a[]){
  //modifing array values
  a[0]=0;
  a[1]=25;
  return a;
  //returning modified values
}
int main(){
  int a[2];
  a[0]=10;
  a[1]=2;
  printf("%d %d",a[0],a[1]);
  //passing an array
  f1(a);
  printf("%d %d",a[0],a[1]);
  return 0;
}
