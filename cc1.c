#include<stdio.h>
int main(void)
{
    int n,a,i,count;
    printf("collatz sequence steps\n");
    for(a=450;a<=550;a++,count=0)
    {
        n=a;
        for(i=1;i>0;i++)
        {
            if(n==1)
            {
                break;
            }
            else if(n%2==0)
            {
                n=n/2;
                count++;
            }
            else if(n%2==1)
            {
                n=3*n+1;
                count++;
            }
        }
        printf("%d\n",count);
    }


    return 0;
}