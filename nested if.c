#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter the numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is the greatest\n",a);
        }else{
            printf("%d is the greatest\n",c);
        }else
            if(b>c){
            printf("%d is greatest\n",b);
        }else{
            printf("%d is the greater\n",c);
        }
    }return 0;
}
