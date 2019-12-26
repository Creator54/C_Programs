#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    scanf("%s",a);
    int b[10],k=0;
    for(int i=0;i<10;i++)b[i]=0;
    for(int i=0;i<strlen(a);i++){
        for(int j=48;j<=57;j++){
            if(a[i]== j){
                b[k]++;
            }
            k++;
        }
        k=0;
    }
    for(int i=0;i<10;i++)printf("%d ",b[i]);
    return 0;
}
