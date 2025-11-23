#include<stdio.h>
#include<string.h>
int main(){
    int a=10,b=25,temp;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("before swapping %d %d\n",a,b);
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("after swapping %d %d\n",a,b);
}
