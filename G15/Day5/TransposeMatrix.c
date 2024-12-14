#include<stdio.h>
int main()
{
    int n;
    int i,j;
    printf("Enter Matrix Size:");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    printf("Enter Matrix Element:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix Elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Reversed Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
         printf("\n");
    }
}
