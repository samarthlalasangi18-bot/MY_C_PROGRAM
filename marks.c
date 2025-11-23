#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks of the student:");
    scanf("%d",&marks);
    if(marks>90)
    printf("grade:a\n");
    else if(marks>75)
    printf("grade:b\n");
    else if(marks>60)
    printf("grade:c\n");
    else if(marks>50)
    printf("grade:d\n");
    else
    printf("grade:e");
}
