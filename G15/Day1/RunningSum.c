#include<stdio.h>
int main()
{
    int n,i,arr[20];
    int sum=0;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("Running Sum of elements is:");
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        printf("%d\n",sum);
    }
}

