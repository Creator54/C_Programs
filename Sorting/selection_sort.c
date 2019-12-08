//selection sort 
//takes the 1st element in the unsorted array and swaps with the smallest element in the unsorted array

#include<stdio.h>
int main(){
    int a, smallest, k = 1;
    puts("Enter array size :\t");
    scanf("%d", &a);
    int b[a];
    puts("Enter array elements :\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }
 
    //selection sort begins
 
    for (int i = 0; i < a - 1; i++) {
            smallest = i;
        for (int j = i + 1; j < a; j++)
            if (b[smallest] > b[j])
                smallest = j;
        //swap
        int temp = b[smallest];
        b[smallest] = b[i];
        b[i] = temp;
       
        printf("\nAfter %d iteration\n", k++);
        for (int i = 0; i < a; i++) {
            printf("%d ", b[i]);
        }
        printf("\n");
    }
    return 0;
}
