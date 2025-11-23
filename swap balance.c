#include<stdio.h>
void swap(float *a,float *b){
    float temp = *a;
    *a=*b;
    *b =temp;
}
int main()
{
    float b1,b2;
    printf("enter the first account balance\n");
    scanf("%f",&b1);
    printf("enter the second account balance\n");
    scanf("%f",&b2);
    printf("before swapping %.2f and %.2f\n",b1,b2);
    swap(&b1,&b2);
   printf(" after swapping %.2f and %.2f\n",b1,b2);
}
