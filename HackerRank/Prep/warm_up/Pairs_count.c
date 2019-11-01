#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a],i,j,count=0;
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++){
        for(j=1;j<a && j!=i;j++){
            if(b[i]==b[j] && b[i]!=0){
                count++;
                b[i]=0;
                b[j]=0;
            }
        }
    }
    printf("%d",count);
}
/*Input :
9
10 20 20 10 10 30 50 10 20

Output :
3
*/
