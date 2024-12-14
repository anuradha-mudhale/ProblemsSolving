#include<stdio.h>
#include<string.h>
int roman(char c)
{ 
	switch(c)
	{
		case 'I':
			return 1;
			break;
		case 'V':
			return 5;
			break;
		case 'X':
			return 10;
			break;
		case 'C':
			return 100;
			break;
		case 'D':
			return 500;
			break;
		case 'M':
			return 1000;
			break;
		default:
			return -1;
			break;
	}
}
int RomanCount(char *s)
{
	int value = 0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(roman(s[i]>roman(s[i+1]))
		{
			value = value+roman(s[i]);
		}
		else
		{
			value = value-roman(s[i]);
		}
	}  
   return value;	
}
int main()
{
	char s[100];
	printf("Enter the Roman string:");
	scanf("%s",s);
	int value = RomanCount(s);
	printf("%d",value);
	
	return 0;
}
