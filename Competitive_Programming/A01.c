//Even Digits
#include<stdio.h>
int check(int);
int check1(int a,int b,int c,int count){
  if((a%b)<c || (a/b)==9) {
    while((a/b)%2!=0){
      a--;
      count++;
    }
  }
  else{
    while((a/b)%2!=0){
      a++;
      count++;
    }
  }
  return count;
}

int check3(int a,int b,int c,int count){
  count=check1(a,b,c,count);
  if((a%b)<c) a-=count;
  else a+=count;
  count+=check(a%b);
  return count;
}

int check (int a){
  int count=0;
  if(a<10 && a!=0){
    if (a%2!=0) count++;
  }
  else if(a<100 && a!=0) count+=check3(a,10,5,count);
  else if(a<1000 && a!=0) count+=check3(a,100,45,count);
  else if(a<10000 && a!=0) count+=check3(a,1000,445,count);
  return count;
}

int main (){
  int testcase, output;
  scanf ("%d", &testcase);
  int input[testcase];
  for (int i = 0; i < testcase; i++){
    scanf ("%d", &input[i]);
  }
  for (int i = 0; i < testcase; i++){
    output = check (input[i]);
    printf ("Case #%d:%d\n", i+1, output);
  }
  return 0;
}

