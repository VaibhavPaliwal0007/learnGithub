#include<iostream>
using namespace std;

int countDigits(int num)
{
    int no=0;
    while(num!=0)
    {
        num=num/10;
        no++;
    }
    return no;

}


int inverse(int num)
{
    int firstNum,newNum,cur;
    int no=countDigits(num);

    for(;no!=0;no--)
    {
        firstNum=num/pow(10,no-1);           //1234
        newNum=newNum+no*pow(10,firstNum-1);
        num=num-firstNum*pow(10,no-1);

    }
    return newNum;

}

int main()
{
    int num;
    
    cout<<"Enter number: ";
    cin>>num;
    cout<<inverse(num);
    return 0;

}