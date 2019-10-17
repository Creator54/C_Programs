/*
Task:
For each integer n in the interval[a,b](given as input) :
	If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1 , "two" for 2 , and so on.
	Else if n>9 and it is an even number, then print "even".
	Else if n>9 and it is an odd number, then print "odd".

InputFormat:
The first line contains an integer, a.
The seond line contains an integer, b.

Constraints:
1<=a<=b<=10^6

OutputFormat:
Print the appropriate english representation,even, or odd, based on the conditions described in the 'task' section.
Note:[a,b]={x ∈ Z| a<=x<=b}={a,a+1,..../b}

SampleInput:
8
11

SampleOutput:
eight
nine
even
odd
*/

#include<stdio.h>
int main(){
    int aa,bb,cc;
    scanf("%d%d",&aa,&bb);
    for(cc=aa;cc<=bb;cc++){
        if(cc==1){
            printf("one\n");
        }
        else if(cc==2){
           printf("two\n");
        }
        else if(cc==3){
           printf("three\n");
        }
        else if(cc==4){
            printf("four\n");
        }
        else if(cc==5){
            printf("five\n");
        }
        else if(cc==6){
            printf("six\n");
        }
        else if(cc==7){
            printf("seven\n");
        }
        else if(cc==8){
            printf("eight\n");
        }
        else if(cc==9){
            printf("nine\n");
        }
        else if(cc>9){
            if(cc%2==0){
                printf("even");
                if(cc!=bb){
                    printf("\n");
                }
            }
            else{
                printf("odd");
                if(cc!=bb){
                    printf("\n");
                }
            }
        }
    }

}

