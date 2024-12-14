#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int n,i;
	printf("Enter the string which you want to reverse:");
	scanf("%s",str);
	n = strlen(str);
	printf("Reversed string:");
	for(i=n-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	printf("\n");
    return 0;
}
