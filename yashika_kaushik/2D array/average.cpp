#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

int averageArray(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    return (sum/size);
}

int main()
{
    int arr[10], val;

    cout<<"Enter values";
    for(int i; i<10; i++)
    {
        cin>>arr[i];
    }

    cout<<"Average= "<<averageArray(arr,10)<<"\n";
    
}