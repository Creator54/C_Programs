#include<stdio.h>
struct student{
    char name[30];
    int roll;
};
void main(){
    printf("Bio-Data");
    struct student a={"Creator54",1811125};
    printf("\n\n%s\n%d",a.name,a.roll);
}
