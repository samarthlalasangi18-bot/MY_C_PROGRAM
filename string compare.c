#include <stdio.h>
#include<string.h>
int main() {
    char a[10],b[10];
    printf("Enter the string a\n");
    fgets(a,sizeof(a),stdin);
    printf("enter the string b\n");
    fgets(b,sizeof(b),stdin);
    if(strcmp(a,b)==0)
    {
        printf("strings are same\n");
    }
    else
    {
        printf("strings are not same\n");
    }
}
