/*7. write a program to check whether roots of a given quadrotic are 
real & distict real and equal or imaginary roots.*/

#include<stdio.h>  
#include<conio.h>  
#include<stdlib.h>  
#include<math.h>  
  
// use function to check the nature of the roots in the quadratic equation  
void R_Quadratic( int x, int y, int z)  
{  
    if (x == 0) // Checks the vakue of x, if x = 0, the equation is not quadratic equation.  
    {  
        printf(" The value of x cannot be zero");  
        return;  
    }  
    int det = y * y - 4 * x * z;  
    double sqrt_det = sqrt(abs (det));  
    if (det > 0)  
    {  
    printf("\n Both roots are real and different \n ");  
    printf("%.2f\n %.2f", (double) (-y + sqrt_det) / (2 * x), (double) (-y - sqrt_det) / (2 * x));  
        }  
else if (det == 0)  
{  
    printf("\n Both roots are real and same ");  
    printf("%.2f", -(double)y / (2 * x));  
}  
else  
{  
    printf("\n Both roots are complex");  
    printf("\n %.2f + %.2fi \n%.2f - %.2fi", -(double)y / (2 * x), sqrt_det, -(double)y / (2 * x), sqrt_det);  
      
}  
}  
void main()  
{  
    int x, y, z; // declare variables x, y and z  
    printf("\n Enter the value of coefficient x, y and z: ");  
    scanf("%d %d %d", &x, &y, &z);  
    R_Quadratic(x, y, z);  // call function R_Quadratic()  
    getch();  
}