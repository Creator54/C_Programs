//Frequency of digit in an integer
#include<stdio.h>
int main(){
    int a;
    printf("Enter any integer :\t");
    scanf("%d",&a);
    if(a>10){
        if(a>100){
            if(a/100==(a%100)/10 && a/100==(a%100)%10){
                printf("Frequency of %d in %d is 3.\n",a/100,a);
                return 0;
            }
            else if(a/100==(a%100)/10){
                printf("Frequency of %d in %d is 2.\nFrequency of %d in %d is 1.",a/100,a,(a%100)%10,a);
                return 0;
            }
            else if(a/100==(a%100)%10){
                printf("Frequency of %d in %d is 2.\nFrequency of %d in %d is 1.",a/100,a,(a%100)/10,a);
                return 0;
            }
            else{
                printf("Frequency of %d in %d is 1.\nFrequency of %d in %d is 1.\nFrequency of %d in %d is 1.\n",a/100,a,(a%100)/10,a,(a%100)%10,a);
                return 0;
            }
            //similar logic can be used for for larger values
        }
        else{
            if(a/10==a%10){
                printf("Frequency of %d in %d is 2.\n",a%10,a);
                return 0;
            }
            else{
                printf("Frequency of %d in %d is 1.\nFrequency of %d in %d is 1.",a/10,a,a%10,a);
                return 0;
            }
        }
    }
    printf("You have a single digit integer.");
    return 0;
}
