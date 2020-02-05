//Converting a string to a variable

#include<stdio.h>
#include<string.h>
int main(){
  char num[10];
  int x;
  fgets(num,10,stdin);
  sscanf(num,"%d",&x);
  printf("%d\n",x);
  return 0;
}
