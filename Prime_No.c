//Takes an integer as input and outputs all prime nos. till that integer

#include<stdio.h>
int main(){
    int a ,count = 0;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= i; j++){
            if( i % j == 0){
                count++;
                if( count == 2 && i == j){
                    printf("%d ", i);
                }
                else if( count > 2){
                    count = 0;
                    break;
                }
            }
        }
        count = 0;
    }
    return 0;
}
/*
Input:
9
Output:
2 3 5 7
*/
