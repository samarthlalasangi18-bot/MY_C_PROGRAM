#include<stdio.h>
struct book
{
    char title[50];
    char author[50];
    int year;
    };
    int main()
    {
        int n,i;
        printf("enter the number of books\n");
        scanf("%d",&n);
        struct book booklist[n];
        for(i=0;i<n;i++)
        {
            printf("enter the title,author and year of book\n");
            scanf("%s %s %d",&booklist[i].title,&booklist[i].author,&booklist[i].year);
        }
        printf("library book details:\n");
        for(i=0;i<n;i++)
        {
            printf("%s %s %d",booklist[i].title,booklist[i].author[i],booklist[i].year);
        }
    }
