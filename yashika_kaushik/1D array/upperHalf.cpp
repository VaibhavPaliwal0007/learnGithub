#include<iostream>
using namespace std;

void upperHalf(int *A, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i)
                cout<<*(A+i*n+j)<<" ";

            else
                cout<<"  ";
        }

        cout<<"\n";
    }

}

int main()
{
    int A[5][5]={1,2,3,4,5,6,7,8,6,0,3,5,2,7,3,2,6,1,9,2,6,4,0,2,1};

    upperHalf((int*)A,5,5);

    return 0;

}

