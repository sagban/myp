#include<stdio.h>
int main(void)
{
    int n,i;
    printf("enter the number for the collatz sequence");
    scanf("%d",&n);
    for(i=1;i>0;i++)
    {
        if(n==1)
        {
            break;
        }
        else if(n%2==0)
        {
            n=n/2;
            printf("%d\t",n);
        }
        else if(n%2==1)
        {
            n=3*n+1;
            printf("%d\t",n);
        }
    }
    return 0;
}