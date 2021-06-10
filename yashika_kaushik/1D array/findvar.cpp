#include<iostream>
using namespace std;

int findPostive(int arr[], int size)
{
    int noPos=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            noPos++;
        }
    }

    return noPos;
}

int findNegative(int arr[], int size)
{
    int noNeg=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            noNeg++;
        }
    }

    return noNeg;
}

int findOdd(int arr[], int size)
{
    int odd=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            odd++;
        }
    }

    return odd;
}


int findEven(int arr[], int size)
{
    int even=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
    }

    return even;
}



int main()
{
    int arr[10], val;

    cout<<"Enter values";
    for(int i; i<20; i++)
    {
        cin>>arr[i];
    }

    cout<<"No. of positive"<<findPostive(arr, 20);
    cout<<"No. of negative"<<findNegative(arr, 20);
    cout<<"No. of odd"<<findOdd(arr, 20);
    cout<<"No. of even"<<findEven(arr, 20);

    return 0;

}