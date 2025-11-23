#include<stdio.h>
int main()
{
    int i,n,arr[100];
    printf("enter the size:\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
    printf("the reverse array is:%d\n",arr[i]);
 }
}
