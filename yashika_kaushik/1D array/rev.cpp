#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

void rev(int arr[],int size)
{
    int rev[size],i=0;
    int og=size;

    for(;size>0;size--)
    {
        rev[size-1]=arr[i];
        i++;
    }

    printArray(rev,og);
    
}


int main()
{
    int arr[10];

    cout<<"Enter values";
    for(int i; i<10; i++)
    {
        cin>>arr[i];
    }

    rev(arr,10);

    return 0;

}