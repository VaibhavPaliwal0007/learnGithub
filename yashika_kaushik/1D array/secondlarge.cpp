#include<iostream>
using namespace std;

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

int secondMax(int arr[], int size)
{
    int secMax=0;
    int ogMax=max(arr,size);

    for(int i=0;i<size;i++)
    {
        if((arr[i]>secMax)&&arr[i]<ogMax)
            secMax=arr[i];
    }

    return secMax;

}

int main()
{
    int arr[10], val;

    cout<<"Enter values";
    for(int i; i<10; i++)
    {
        cin>>arr[i];
    }

    cout<<"Second Largest= "<<secondMax(arr,10);

    return 0;
}