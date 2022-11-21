/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter rows: ");
    scanf("%d", &rows);

    // Prints upper part of the pattern
    for(i=1; i<=rows; i++)
    {
        // Prints trailing spaces
        for(j=rows-1; j>=i; j--)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
