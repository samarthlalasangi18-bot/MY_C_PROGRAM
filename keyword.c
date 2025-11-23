#include <stdio.h>
#include <string.h>
int main() {
    char text[100], keyword[20];
printf("Enter course description: ");
    gets(text);
printf("Enter keyword: ");
    gets(keyword);
if(strstr(text, keyword))
        printf("Keyword '%s' found.", keyword);
    else
        printf("Keyword '%s' not found.", keyword);
}
