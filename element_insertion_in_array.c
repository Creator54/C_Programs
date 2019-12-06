//Insterting elements in an array
#include<stdio.h>
int a[50],i,j,n,pos,v;
void insert(int n,int pos,int v){
    for(i=0;i<n+1;i++){
        if(i==pos){
            int temp=a[i];
            a[i]=v;
            for(j=i+1;j<n+1;j++){
                v=a[j];
                a[j]=temp;
                temp=v;
            }
            break;
        }
    }
    printf("After Insertion:\n");
    for(i=0;i<n+1;i++){
        printf("%d ",a[i]);
    }
}
void main(){
    printf("Enter the size of array :\t");
    scanf("%d",&n);
    printf("Enter the elements of the array :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the index at which you want to insert element :\t");
    scanf("%d",&pos);
    
    printf("Enter the element you want to insert :\t");
    scanf("%d",&v);
    insert(n,pos,v);
}
