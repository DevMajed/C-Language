
#include <stdio.h>
#include <math.h>
int main()
{
float A, B, C, z, x, y ;


printf("This program will solve simple quadratic equation\n") ;
printf("Ax^2+Bx+C\n") ;
printf("Enter the Values for A, then B, and then C  ") ;
scanf("%f %f %f", & A, & B, &C) ;
printf("%.2f^2 + %.2fx + %.2f = 0\n", A, B, C) ;

if ( A == 0)
{
    printf("x=-c/b\n") ;
    x = (-C) / B ;
    printf("root %.2f\n", x) ;
   
}
    else
    {
        z = (pow(B,2)-4*A*C);
        if (z>0)
        {
        x = ((-B) + sqrt( pow(B, 2) -4*A*C))/(2*A); // pow takis the power of a function, like using ^ in matlab
        y = ((-B) - sqrt( pow(B, 2) -4*A*C))/(2*A);
        printf("root %.2f %.2f\n", y, x);
        }
        if (z==0)
        {
        x = (-B)/(2*A);
        printf("roots %.2f\n", x);
        }

        if (z<0)
        printf("No real roots, this program doesn't solve imaginary roots\n");
    }
}
