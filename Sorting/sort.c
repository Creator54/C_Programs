// Sorting :
#include<stdio.h>
int main(){
    int a;
    printf("Outputs sorted array of integers.\n\nEnter array size          :\t");
    scanf("%d",&a);
    if(a>=10){
        printf("Enter %d elements         :\t",a);
    }
    else if(a>=100){
        printf("Enter %d elements        :\t",a);
    }
    else
    printf("Enter %d elements          :\t",a);
    int b[a],k;
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        if(i>0){
            if(b[i]<=b[i-1]){
                for(int j=0;j<=i;j++){
                    if(b[i]<=b[j]){
                        k=b[j];
                        b[j]=b[i];
                        b[i]=k;
                    }
                }
            }
        }
    }
    printf("Elements in sorted order  :\t");
    for(int i=0;i<a;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
