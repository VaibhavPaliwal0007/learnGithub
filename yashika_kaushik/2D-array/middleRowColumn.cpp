#include<iostream>
using namespace std;

void middleColumn(int *A, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n/2)
                cout<<*(A+i*n+j)<<" ";

        }

        cout<<"\n";
    }

}

void middleRow(int *A, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==m/2)
                cout<<*(A+i*n+j)<<" ";

        }

        cout<<"\n";
    }

}

int main()
{
    int A[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

    middleColumn((int*)A,5,5);
    middleRow((int*)A,5,5);

    return 0;

}