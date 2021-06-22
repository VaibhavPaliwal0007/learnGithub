#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

void asc(int arr[],int size)
{
    int t;
    for(int j=0;j<size;j++)
    {
        for(int i=j+1;i<size;i++)
        {
            if(arr[j]<arr[i])
            {
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
    }
}