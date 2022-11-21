#include<stdio.h>  
void main()  
{  
   int array[100],n,c=0;
   printf("enter the no of inputs you want to enter : ");
   scanf("%d",&n);
   printf("\nenter the numbers in the array\n");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }
   for(int j=0;j<n;j++)
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
       if(c!=0)
       {
           printf("the array is not a pairwise array!\n");
       }
       else 
       {
           printf("the array is a pairwise array!\n");
       }
   }
