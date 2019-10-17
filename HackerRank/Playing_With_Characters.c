#include <stdio.h>
int main() 
{
    char a,b[10],c[100];
    scanf("%c%s %[^\n]%*c",&a,b,c);
    printf("%c\n%s\n%s",a,b,c);
    return 0;
}

