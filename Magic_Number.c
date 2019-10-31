/*Magic NO:It is a number whose sum of the digits concludes to 1.
i.e  19999
1+9+9+9+9=37
3+7=10
1+0=1
*/

/*Created on 31st Oct
Author=@Creator54*/
#include<stdio.h>
int add(int a){
    int b[8];
    if(a==0){
        return 0;
    }
    if(a>=10){
        if(a<100){
            b[0]=a/10;
            b[1]=a%10;
            a=b[0]+b[1];
            add(a);
        }
        else if(a>100 && a<1000){
            b[0]=a/100;
            b[1]=a%100;
            b[2]=b[1]/10;
            b[3]=b[1]%10;
            a=b[0]+b[2]+b[3];
            add(a);
        }
        else if(a>1000 && a<10000){
            b[0]=a/1000;
            b[1]=a%1000;
            b[2]=b[1]/100;
            b[3]=b[1]%100;
            b[4]=b[3]/10;
            b[5]=b[3]%10;
            a=b[0]+b[2]+b[4]+b[5];
            add(a);
        }
        else if(a>10000 && a<100000){
            b[0]=a/10000;
            b[1]=a%10000;
            b[2]=b[1]/1000;
            b[3]=b[1]%1000;
            b[4]=b[3]/100;
            b[5]=b[3]%100;
            b[6]=b[5]/10;
            b[7]=b[5]%10;
            a=b[0]+b[2]+b[4]+b[6]+b[7];
            add(a);
        }
        else if(a>10000){
            printf("Oops Beyond range.\n\nPress any no. to recheck \n");
            scanf("%d",&a);
            add(a);
        }
    }
    else if(a==1){
        printf("Woah U got a Magic No.\n\nPress any no. to recheck \n");
        scanf("%d",&a);
        add(a);
    }
    else{
        printf("Oops try again.\n\nPress any no. to recheck\n");
        scanf("%d",&a);
        add(a);
    }
}
void main(){
    int a;
    printf("This Program checks for Magic No.(Range 1-99999)\nUse 0 to Exit\n\nEnter your no.\t");
    scanf("%d",&a);
    add(a);
}
