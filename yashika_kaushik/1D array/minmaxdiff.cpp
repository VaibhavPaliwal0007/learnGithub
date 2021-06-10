#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

int minDiff(int arr[],int size)
{
    int diff,min=arr[1]-arr[0];
    
    
    for(int j=0;j<size;j++)
    {
        for(int i=j+1;i<size;i++)
        {
            diff=arr[i]-arr[j];

            diff=diff<0 ? -1*diff:diff;

            if(diff<min)
                min=diff;
        }
    }

    return min;
}

int maxDiff(int arr[],int size)
{
    int diff=0,max=arr[1]-arr[0];
    
    for(int j=0;j<size;j++)
    {
        for(int i=j+1;i<size;i++)
        {
            diff=arr[i]-arr[j];

            diff=diff<0 ? -1*diff:diff;

            if(diff>max)
                max=diff;
        }
    }

    return max;
}

int main()
{
    int arr[10], val;

    cout<<"Enter values";
    for(int i; i<10; i++)
    {
        cin>>arr[i];
    }

    cout<<"Min="<<minDiff(arr,10)<<"\n";
    cout<<"Max="<<maxDiff(arr,10);

    return 0;
}