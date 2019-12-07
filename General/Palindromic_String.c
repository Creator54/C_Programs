#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int i,flag=1;
    for(i=0;i<strlen(a);i++){
        if(a[i]!=a[strlen(a)-1-i]){
            flag=0;
            break;
        }
    }
    (flag==0)?printf("NO"):printf("YES");
    return 0;
}
/*
Input:
aba
Output:
YES
*/
