#include<stdio.h>
#define N 10
void main()
{
int num[N],i,gre,sgre,pos;
printf("enter the data of %d inputs",N);
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
pos=i;
}
}
sgre=0;
for(i=0;i<N;i++)
{
if(i!=pos)
{
if(sgre<num[i])
{
sgre=num[i];
}
}
}

printf("second largest %d",sgre);

}
