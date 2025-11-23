#include <stdio.h>
#include<string.h>
#define MAX 100
void main()
{
   char description[MAX] ;
   char keyword[100];
   int len;
   printf("enter the course discription\n");
   scanf("%s",description);
   len=strlen(description);
   printf("enter the keyword:\n");
   scanf("%s",keyword);
   if(strstr(description,keyword))
    printf("keyword %s found in %s course description\n",keyword,description);
    else
    printf("keyword %s not found in %s course description\n",keyword,description);
}
