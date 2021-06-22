#include<stdio.h>

int main()
{
    int num, rev=0, last;
    printf("Enter");
    scanf("%d", &num);

    while(num!=0)
    {
        last=num%10;
        rev=rev*10+last;
        num=num/10;
    } 

    printf("%d", rev);
    return 0;

}