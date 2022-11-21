#include<stdio.h>  
int check(int array[], int n)
{
    int c=0;
    for(int j=0;j<n-1;j++)
   {
       for (int k=j+1;k<n;k++)
       {
           if(array[j]==array[k])
           {
               c=1;
               break;
           }
       }
   }
   return c;
}

int main() 
{  int c=0,n;
   printf("enter the no of inputs you want to enter : ");
   scanf("%d",&n);
   int array[n];
   printf("\nenter the numbers in the array\n");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }
   c=check(array,n);
       if(c!=0)
       {
           printf("the array is not a pairwise array!\n");
       }
       else 
       {
           printf("the array is a pairwise array!\n");
       }
}

