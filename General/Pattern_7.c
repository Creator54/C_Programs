//pattern
/*
25                                                                                                                                                                           
01 02 03 04 05                                                                                                                                                               
16 00 00 00 06                                                                                                                                                               
15 00 00 00 07                                                                                                                                                               
14 00 00 00 08                                                                                                                                                               
13 12 11 10 09
*/
#include<stdio.h>

int arr[100],value=1;
int top(int a,int i,int index){
    int k;
    for(k=0;k!=i;k++){
        arr[k]=value;
        value++;
    }
    return k;
}
int right(int a,int i,int index){
    int k;
    for(k=index+i-1;k<a;k=k+i){
        arr[k]=value;
        value++;
    }
    return k;
}
int bottom(int a,int i,int index){
    int k;
    for(k=a-2;k!=a-i-1;k--){
        arr[k]=value;
        value++;
    }
    return k;
}
int left(int a,int i,int index){
    int k;
    for(k=a-2*i;k!=0;k=k-i){
        arr[k]=value;
        value++;
    }
    return k;
}

int main(){
	int a,count=0,index=0;
	puts("Enter a perfect square no :\t");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(i*i==a){
		    
		        index=top(a,i,index);
		        index=right(a,i,index);
		        index=bottom(a,i,index);
		        index=left(a,i,index);
		    
			for(int j=0;j<a;j++){
				if(arr[j]<10){
					if(count==i){
						count=0;
						printf("\n");
					}
					count++;
					printf("0%d ",arr[j]);
				}
				else{
				    if(count==i){
						count=0;
						printf("\n");
					}
					count++;
					printf("%d ",arr[j]);
				}
			}
			return 0;
		}
	}
}
