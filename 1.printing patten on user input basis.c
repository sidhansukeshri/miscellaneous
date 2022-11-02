//this code prints a patten of a square or a rectangle depending on the values of sides input by user!
//my reg no is RA2211042010032
#include <stdio.h>
int main()
{
    int i,j,k,l,a,b;
    printf("enter the 2 sides : ");
    scanf("%d %d",&l,&b);
    for(i=1;i<=b;i++)
    {
        printf("* ");
    
    }
    printf("\n");
    for(j=1;j<=l;j++)
    {
        for(k=1;k<=b;k++)
        if (k==1 || k==b)
        {
            printf("* ");
        }
        else 
        {
            printf("  ");
        }
        printf("\n");
    }
    
    for(a=1;a<=b;a++)
    {
        printf("* ");
    }
    printf("\n");
    if (l==b)
    {
        printf("the patten makes a square!");
    }
    else
    {
        printf("the patten makes a rectangle!");
    }
}


---------
output:
---------
enter the 2 sides : 10
12
* * * * * * * * * * * * 
*                     * 
*                     * 
*                     * 
*                     * 
*                     * 
*                     * 
*                     * 
*                     * 
*                     * 
*                     * 
* * * * * * * * * * * * 
the patten makes a rectangle!
