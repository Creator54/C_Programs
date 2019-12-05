//selection sort 
//takes the 1st element in the unsorted array and swaps with the smallest element in the unsorted array

#include<stdio.h>
int main(){
    int a,smallest,s_index,k=1;
    puts("Enter array size :\t");
    scanf("%d",&a);
    int b[a];
    puts("Enter array elements :\n");
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    
    //selection sort begins
    
    for(int i=0;i<a-1;i++){
        for(int j=i+1;j<a;j++){
            if(b[i]>b[j]){
                smallest=b[j];
                s_index=j;
            }
        }
        if(b[i]>b[s_index]){
            b[s_index]=b[i];
            b[i]=smallest;
        }
        printf("\nAfter %d iteration\n",k++);
        for(int i=0;i<a;i++){
            printf("%d ",b[i]);
        }
    }
    return 0;
}

/*

Output1:

Enter array size :                                                                                                                                                                       
5                                                                                                                                                                                        
Enter array elements :                                                                                                                                                                   
                                                                                                                                                                                         
5 4 3 2 1                                                                                                                                                                                
                                                                                                                                                                                         
After 1 iteration                                                                                                                                                                        
1 4 3 2 5                                                                                                                                                                                
After 2 iteration                                                                                                                                                                        
1 2 3 4 5                                                                                                                                                                                
After 3 iteration                                                                                                                                                                        
1 2 3 4 5                                                                                                                                                                                
After 4 iteration                                                                                                                                                                        
1 2 3 4 5                                                                                                                                                                                
                                                                                                                                                                                         
...Program finished with exit code 0 


Output2:

Enter array size :                                                                                                                                                                      
5                                                                                                                                                                                       
Enter array elements :                                                                                                                                                                  
                                                                                                                                                                                        
12 4 86 9 0                                                                                                                                                                             
                                                                                                                                                                                        
After 1 iteration                                                                                                                                                                       
0 4 86 9 12                                                                                                                                                                             
After 2 iteration                                                                                                                                                                       
0 4 86 9 12                                                                                                                                                                             
After 3 iteration                                                                                                                                                                       
0 4 12 9 86                                                                                                                                                                             
After 4 iteration                                                                                                                                                                       
0 4 12 9 86                                                                                                                                                                             
                                                                                                                                                                                        
...Program finished with exit code 0 


Output3 (WRONG OUTPUT)

Enter array size :                                                                                                                                                                      
5                                                                                                                                                                                       
Enter array elements :                                                                                                                                                                  
                                                                                                                                                                                        
2312456 78 456 243 778                                                                                                                                                                  
                                                                                                                                                                                        
After 1 iteration                                                                                                                                                                       
778 78 456 243 2312456                                                                                                                                                                  
After 2 iteration                                                                                                                                                                       
778 78 456 243 2312456                                                                                                                                                                  
After 3 iteration                                                                                                                                                                       
778 78 243 456 2312456                                                                                                                                                                  
After 4 iteration                                                                                                                                                                       
778 78 243 456 2312456                                                                                                                                                                  
                                                                                                                                                                                        
...Program finished with exit code 0


Output4 (WRONG OUTPUT):

10                                                                                                                                                                                      
Enter array elements :                                                                                                                                                                  
                                                                                                                                                                                        
7669 5567 21 7 0 645 8 35 2 67                                                                                                                                                          
                                                                                                                                                                                        
After 1 iteration                                                                                                                                                                       
67 5567 21 7 0 645 8 35 2 7669                                                                                                                                                          
After 2 iteration                                                                                                                                                                       
67 2 21 7 0 645 8 35 5567 7669                                                                                                                                                          
After 3 iteration                                                                                                                                                                       
67 2 8 7 0 645 21 35 5567 7669                                                                                                                                                          
After 4 iteration                                                                                                                                                                       
67 2 8 0 7 645 21 35 5567 7669                                                                                                                                                          
After 5 iteration                                                                                                                                                                       
67 2 8 0 7 645 21 35 5567 7669                                                                                                                                                          
After 6 iteration                                                                                                                                                                       
67 2 8 0 7 35 21 645 5567 7669                                                                                                                                                          
After 7 iteration                                                                                                                                                                       
67 2 8 0 7 35 21 645 5567 7669                                                                                                                                                          
After 8 iteration                                                                                                                                                                       
67 2 8 0 7 35 21 645 5567 7669                                                                                                                                                          
After 9 iteration                                                                                                                                                                       
67 2 8 0 7 35 21 5567 35 7669                                                                                                                                                           
                                                                                                                                                                                        
...Program finished with exit code 0    

*/
