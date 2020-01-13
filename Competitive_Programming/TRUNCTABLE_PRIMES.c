[In reply to Hima]
//TRUNCATABLE PRIMES

#include<stdio.h>

int flag = 0;
int zero_check( int i){
  int flag = 1;
  if((( i / 100) % 10 != 0 && ( i % 100) / 10 != 0 && ( i % 100) % 10 != 0) || i < 100) flag = 0;
  return flag;
}
int even_check( int i){
  for(int j = 2 ; j <= i ; j++){
      if( i % j == 0 && j != i) return 1;
      else if( i % j == 0 && j == i) return 0;
  }
}
int truncatable_check( int i,int flag){
  if(flag==0){
    if(even_check( i % 1000) == 0 && even_check( i % 100) == 0 && even_check(( i % 1000) % 10) == 0) return 0;
  }
  else if(flag==1) if(((even_check(i/1000)==0) || (i/1000==0)) && ((even_check(i/100)==0) || (i / 100 == 0)) && ((even_check (i/10)==0) || (i/10==0))) return 0;
}
int main(){
    int limit = 5000 , i;
    (flag==0)?printf("LEFT TRUNCATABLE:\n\n"):printf("\n\nRIGHT TRUNCATABLE:\n\n");
    for(i = 1; i <= limit; i++){
        if(even_check(i) == 0){
          if(zero_check(i) == 0){
            if( flag == 0){
              if ( truncatable_check( i , flag) == 0) printf("%d ",i);
            }
            else if( flag == 1) if(truncatable_check( i, flag) == 0) printf("%d ",i);
          }
        }
    }
    if(flag!=1){
      flag=1;
      main();
    }
    return 0;
}
