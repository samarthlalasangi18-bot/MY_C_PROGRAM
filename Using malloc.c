#include <stdio.h>
#include<stdlib.h>
int main() {
    int n,i;
    printf("enter the size:\n");
    scanf("%d",&n);
   int *ptr=(int*)malloc(sizeof(int));
   printf("enter the elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&ptr[i]);
    printf("the elements are:\n",ptr[i]);
    free(ptr);
   for(i=0;i<n;i++)
    printf("after the elements are:%d\n",ptr[i]);
    
}
