#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,a[5],k,i;
    scanf("%d", &n);
    if(10000<=n && n<=99999){
        a[0]=n/10000;
        k=n%10000;
        a[1]=k/1000;
        k=k%1000;
        a[2]=k/100;
        k=k%100;
        a[3]=k/10;
        a[4]=k%10;
        printf("%d",a[0]+a[1]+a[2]+a[3]+a[4]);
    }
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}

