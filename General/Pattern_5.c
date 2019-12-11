//pattern
/*
1 1 1 1 1
1 1 1 2
1 1 3
1 4
5
*/
#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=i;j<a;j++){
			printf("1 ");
		}
		printf("%d\n",i);
	}
	return 0;
}
