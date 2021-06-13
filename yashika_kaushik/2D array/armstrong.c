#include<stdio.h>
#include<math.h>

int main()
{
    for(int i=1;i<=1000;i++)
    {
        int sum=0, num=i;
        int temp=i;

        int digits=0;
        while(temp>0)
        {
            temp=temp/10;
            digits++;
        }

        while(num!=0)
        {
            int last=num%10;
            num=num/10;
            sum=sum+pow(last,digits);

        }

        if(sum==i)
            printf("%d \n", i);
    }
    return 0;
}