#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, r1, r2;
    printf("Enter a, b, c:\n");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c; 
    if (d > 0) 
    {
        printf("Roots are real and distinct.\n");
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Root1 = %.2f\n Root2 = %.2f\n", r1, r2);
    }
    else if (d == 0)
    {
        printf("Roots are real and equal.\n");
        r1 = r2 = -b / (2*a);
        printf("Root1 = Root2 = %.2f\n", r1);
    }
    else {
        printf("Roots are imaginary.\n");
    }
}
