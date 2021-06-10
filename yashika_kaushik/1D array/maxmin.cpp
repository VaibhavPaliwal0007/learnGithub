#include<iostream>
using namespace std;

int min(int arr[],int size)
{
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    return min;

}

int max(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
            max=arr[i];
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

    cout<<"Min="<<min(arr,10)<<"\n";
    cout<<"Max="<<max(arr,10);

    return 0;
}