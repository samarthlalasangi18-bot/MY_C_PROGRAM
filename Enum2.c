#include<stdio.h>
  enum class{
     Student1=90,
     student2=80,
     student3=70,
     student4=60
};
int main()
{
	enum class marks;
	marks=student2;
	printf("%d",marks);
	}
