#include <stdio.h>

int main() {
  int num,rev=0,rem,original;
  printf("enter the number\n");
  scanf("%d",&num);
  original=num;
  while(num!=0)
  {
      rem=num%10;
      rev=rev*10+rem;
      num=num/10;
  }
  if(original==num)
  {
      printf("it is a polindrome\n");
  }
  else
  {
      printf("it is not a polindrome\n");
  }
}
