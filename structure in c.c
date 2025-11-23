#include<stdio.h>
int student()
{
    int age;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    printf("enter the name:\n");
    scanf("%s",&s1.name);
    printf("enter the age:\n");
    scanf("%d",&s1.age);
    printf("enter the marks:\n");
    scanf("%f",&s1.marks);
    printf("your name is %s",s1.name);
    printf("your age is %d",s1.age);
    printf("your marks is %f",s1.marks);
}
