#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

int sumArray(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    return sum;
}

int prodArray(int arr[],int size)
{
    int product=0;
    for(int i=0;i<size;i++)
    {
        product=product*arr[i];
    }

    return product;
}

int main()
{
    int arr[10], val;

    cout<<"Enter values";
    for(int i; i<10; i++)
    {
        cin>>arr[i];
    }

    cout<<"Sum= "<<sumArray(arr,10)<<"\n";
    cout<<"Product= "<<prodArray(arr,10);
}