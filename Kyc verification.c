@@ -0,0 +1,21 @@
#include<stdio.h>
int main()
{
    int choice;
    printf("kyc verification 1-pan,2-aadhar,3-aphaar,4-driving licence,5-passport\n");
    printf("enter the choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("pan verified\n");
        break;
        case 2:printf("aadhar verified\n");
        break;
        case 3:printf("aphaaar verified\n");
        break;
        case 4:printf("driving licence verified\n");
        break;
        case 5:printf("passport verified\n");
        default:printf("invalid choice ");
    }
}
