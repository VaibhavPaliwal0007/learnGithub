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


void addArray(int *A, int *B, int m, int n)
{
    int add[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            add[i][j]=*(A+i*n+j)+*(B+i*n+j);
        }

        cout<<"\n";
    }

    output((int*)add,5,5);

}

int main()
{
    int A[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int B[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

    addArray((int*)A,(int*)B,5,5);

    return 0;
}
