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

void sumAll(int *A, int m, int n)
{
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=sum+*(A+i*n+j);
        }

    }

    cout<<"\nSum= "<<sum;
}

void sumRow(int *A, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+*(A+i*n+j);
        }

        cout<<"Sum of row "<<i+1<<" is "<<sum<<"\n";
    }

}

void sumColumn(int *A, int m, int n)
{
    for(int j=0;j<n;j++)
    {
        int sum=0;
        for(int i=0;i<m;i++)
        {
            sum=sum+*(A+i*n+j);
        }

        cout<<"Sum of row "<<j+1<<" is "<<sum<<"\n";
    }

}

void transpose(int *A, int m, int n)
{
    for(int j=0;j<n;j++)
    {
        int sum=0;
        for(int i=0;i<m;i++)
        {
            cout<<*(A+i*n+j)<<" ";
        }

        cout<<"\n";
    }
    
}

int main()
{
    int A[5][5], option;

    cout<<"Enter values\n";

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>A[i][j];
        }

    }

    cout<<"Press 1 for output\n"
        <<"Press 2 for sum of all elements\n"
        <<"Press 3 for row wise sum\n"
        <<"Press 4 for column wise sum\n"
        <<"Press 5 for transpose\n";

    cin>>option;


    switch(option)
    {
        case 1: output((int*)A, 5, 5);
            break;

        case 2: sumAll((int*)A, 5, 5);
            break; 

        case 3: sumRow((int*)A, 5, 5);
            break;

        case 4: sumColumn((int*)A, 5, 5);
            break;

        case 5: transpose((int*)A, 5, 5);
            break;

        default: cout<<"Other number";
            break;

    }

    return 0;

}