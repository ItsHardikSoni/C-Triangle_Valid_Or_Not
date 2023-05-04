// If the lengths of three sides of a triangle are entered through the keyboard,
// write a program to check whether the triangle is valid or not.
// The triangle is valid if the sum of two sides is greater than the largest of the three sides.


#include<stdio.h>
#include<conio.h>
int main()
{
    int side1, side2, side3, largeside, sum;
    printf("\n Enter Three Sides of a Triangle");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1>side2)
    {
        if (side1>side3)
            {
                sum = side2+side3; largeside = side1;
            }
        else
            {
                sum = side1+side2; largeside = side3;
            }    
    }

    else
    {
        if (side2>side3)
        {
            sum = side1+side3; largeside = side2;
        }
        else
        {
            sum = side1+side2; largeside = side3;
        }
    }        

    if (sum>largeside)
        printf("The Triangle is Valid Triangle\n");
    else
        printf("The Triangle is an Invalid Triangle\n");
    return 0;
}
