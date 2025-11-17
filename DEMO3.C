#include <stdio.h>
int main() {
    int p,r,t,si;
    printf("Enter the principle\n");
    scanf("%d",&p);
     printf("Enter the rate\n");
    scanf("%d",&r);
     printf("Enter the time\n");
    scanf("%d",&t);
     si=(p*t*r)/100;
     printf("simple interest=%d,si");
  return 0;
}
