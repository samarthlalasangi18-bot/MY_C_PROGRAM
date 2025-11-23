#include <stdio.h>
#include<string.h>
int main() {
    char name[30];
  printf("enter the name\n");
  scanf("%s",&name);
  int length=strlen(name);
    printf("length of string is %d",length);
}
