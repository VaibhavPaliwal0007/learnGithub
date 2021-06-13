#include<iostream>
using namespace std;

void diag(int *A, int m, int n)
{
    int limit=m+n-1,j=0,a=0;

    for(int i=0;i<limit;i++)
    {
        
        if(i<m-1)
        {
            j=0;
            for(int x=i;x>=0;x--)
            {
                cout<<*(A+x*n+j)<<" ";
                j++;
            }
            a=-1;
        }

        
        else
        {
            int x=m-1;
            for(j=a;j<=n-1;j++)
            {
                cout<<*(A+x*n+j)<<" ";
                x--;   
                
            }

        }
        a++;
        cout<<"\n";
    }

}

int main()
{
    int A[5][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    diag((int*)A,5,4);

    return 0;
}