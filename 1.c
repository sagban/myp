#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[50],b[50][50];
	int i,j=0,a,t,k,x=0,count=0;
	printf("enter the name\n");
	fgets(name,50,stdin);
	for(a=1,t=1;a>0;a++)
	{
		for(i=x;name[i]!=32;i++)
		{
			if(name[i]=='\0')
			{
				break;
			}
			else
			{
				b[j][i]=name[i];
				count++;
			}
		}
		if(count==strlen(name))
		{
			break;
		}
		x=count+1;
		count=count+1;
		j++;
		t++;
	}
	for(k=t-1;k>=0;k--)
	{
		printf("%s ",b[k]);
	}
	return 0;
}