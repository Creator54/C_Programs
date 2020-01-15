#include<stdio.h>
int main(){
    int a =10,b=25;
    char c = 'A',d[10]="SAM",data[100];
    sprintf(data,"%c My name is %s.I am %d years old.My brother is %d",c,d,a,b);
    puts(data);
    return 0;
}
