//bubble sort
//outputs sorted integers

#include<stdio.h>

int main(){
    int a,i=0,j;
    printf("Enter array size:\t");
    scanf("%d",&a);
    int b[a];
    printf("Enter array elements:\n");
    while(i!=a){
        scanf("%d",&b[i]);
        i++;
    }
    //sorting
    for(i=0;i<a-1;i++){
        if(b[i]>b[i+1]){
            for(j=0;j<a-1;j++){
                if(b[j]>b[j+1]){
                    int k=b[j];
                    b[j]=b[j+1];
                    b[j+1]=k;
                }
            }
            i=-1;
        }
    }
    for(i=0;i<a;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
