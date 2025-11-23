#include<stdio.h>
union student{
    int age;
    float fees;
};
int main()
{
   union student s;
    s.age=20;
    s.fees=56.34;
    printf("age=%d\n",s.age);
    printf("fees=%.2f\n",s.fees);
}
