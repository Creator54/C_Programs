#include<stdio.h>
void pattern(int i){
    int a;
    if(i!=1){
        for(a=0;a<i;a++){
            printf("%d",i);
        }
        i--;
        printf("\n");
        pattern(i);
    }
    else{
        printf("1");
    }
}
void main(){
    int a;
    scanf("%d",&a);
    pattern(a);
}
/*
Input:

9

Output:

999999999                                                                                                                       
88888888                                                                                                                        
7777777                                                                                                                         
666666                                                                                                                          
55555                                                                                                                           
4444                                                                                                                            
333                                                                                                                             
22                                                                                                                              
1 

*/
