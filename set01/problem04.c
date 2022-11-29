#include<stdio.h>

int main(){
  int a,b,sum;
  printf("Enter a:");
  scanf("%d" ,&a);
  printf("Enter b:");
  scanf("%d" ,&b);
  add( a,  b, &sum);
  output( a,  b,  sum);
 printf("Sum of %d and %d is  %d", a, b, sum);
  }

   add(int a, int b, int *sum){
     *sum=a+b;
     }
  

  void output(int a, int b, int sum)
    {
      //printf("Sum of %d and %d is  %d", a, b, sum);
    }
