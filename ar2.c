#include<stdio.h>
#define N 10
void main()
{
int num[N],i,gre;
printf("enter the data o %d inputs",N);
for(i=0;i<N;i++)
{
scanf("%d",&num[i]);
}
gre=0;
for(i=0;i<N;i++)
{
if(gre<num[i])
{
gre=num[i];
}
}
printf("greater no is %d",gre);

}
