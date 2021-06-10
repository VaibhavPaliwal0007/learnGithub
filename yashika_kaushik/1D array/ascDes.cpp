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
            if(arr[j]>arr[i])
            {
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
    }

    printArray(arr,size);
    
}

void des(int arr[],int size)
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

    printArray(arr,size);
    
}

int main()
{
    int arr[]={3,8,7,5,1,9,2,4,6,55}, val, loc;

    cout<<"Ascending\n";
    asc(arr,10);
    cout<<"Descending\n";
    des(arr,10);

    return 0;
    
}