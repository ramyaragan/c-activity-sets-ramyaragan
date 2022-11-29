#include<stdio.h>

int main(){
  int a,b;
  printf("Enter a:");
  scanf("%d" ,&a);
  printf("Enter b:");
  scanf("%d" ,&b);
  sum=add(int a, int b);
   output(int a, int b, int sum);
  }

  int add(int a, int b){
    int sum=a+b;
    return sum;
  

  void output(int a, int b, int sum)
    {
      printf("Sum of %d  %d   %d", a , b, sum);
    }
