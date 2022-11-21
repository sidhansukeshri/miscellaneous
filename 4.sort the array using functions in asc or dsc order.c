//my reg no is RA2211042010032
#include <stdio.h>
int acc(int a[100],int n)
{   
    for (int i=0;i<n;i++)
    {
        int temp=0;
        for (int j=i+1;j<n;j++)
        {
            if(a[i]>=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else
            {
                continue;
            }
        }
    }
}
int dec(int a[100],int n)
{
    int temp=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (a[i]<=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else
            {
                continue;
            }
        }
    }
}
int main()
{
    char o;
    int a[100],n,d[100];
    printf("ascending (a)or dscending(d): \n");
    scanf("%c",&o);
    printf("Enter the no of inputs you want : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Enter your [%d] : ",i);
        scanf("%d",&a[i]);
    }
    if (o=='a' || o=='A')
    {
        acc(a,n);
    }
    else if (o=='d' || o=='D')
    {
        dec(a,n);
    }
    printf("after arranging :\n");
    for (int k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
}
