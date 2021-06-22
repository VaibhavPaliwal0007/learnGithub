#include<iostream>
using namespace std;

void output(int *A, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<*(A+i*n+j)<<" ";
        }

        cout<<"\n";
    }

}

void sumLeftDiag(int *A, int m, int n)
{
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                sum=sum+*(A+i*n+j);
        }

    }

    cout<<"\nSum= "<<sum;

}

void sumRightDiag(int *A, int m, int n)
{
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==4-j)
                sum=sum+*(A+i*n+j);
        }

    }
    cout<<"\nSum= "<<sum;

}

int main()
{
    int A[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

    output((int*)A,5,5);
    sumLeftDiag((int*)A,5,5);
    sumRightDiag((int*)A,5,5);

    return 0;

}