#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
	char num[50][3];
	int i,a,b,c;
	printf("enter the string\n");
	string str = GetString();
	a=0,b=0,c=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			num[a][2]=str[i];
			a++;
		
		}
		else 
		{
			if(str[i]>='a' && str[i]<='z')
			
			{
			num[b][1]=str[i];
			b++;
			
			}
			else 
			{
				num[c][0]=str[i];
				c++;
			
			}
		}
	}
	printf("\nuppercase\t");
	for(i=0;i<a;i++)
	{
	printf("%c\t",num[i][2]);
	}
	printf("\nsmallcase\t");
	for(i=0;i<b;i++)
	{
		printf("%c\t",num[i][1]);
	}
	printf("\ndigits\t");
	for(i=0;i<c;i++)
	{
		printf("%d\t",atoi(num[i][0]));
	}
	
}