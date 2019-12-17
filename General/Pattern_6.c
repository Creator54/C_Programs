//pattern
/*
01 02 03 04 05
06 07 08 09 10
11 12 13 14 15
16 17 18 19 20
21 22 23 45 25
*/

#include<stdio.h>
int main(){
	int a,count=0;
	puts("Enter a square no :\t");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(i*i==a){
			for(int j=1;j<=a;j++){
				if(j<10){
					if(count==i){
						count=0;
						printf("\n");
					}
					count++;
					printf("0%d ",j);
				}
				else{
				    if(count==i){
						count=0;
						printf("\n");
					}
					count++;
					printf("%d ",j);
				}
			}
			return 0;
		}
	}
}
