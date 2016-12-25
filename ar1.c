#include<stdio.h>
#define N 5
int main(void)
{
int num[N],i;
printf("enter the data of %d inputs",N);
for(i=0;i<N;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<N;i++)
{
printf("%d \n",num[i]);
}
}
