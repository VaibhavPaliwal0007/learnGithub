#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

void rightRotate(int arr[], int size)
{
    int last=arr[size-1];
    for(int i=size-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=last;

    printArray(arr,size);

}

int main()
{
    int arr[]={3,8,7,5,1,9,2,4,6,55}, val, loc;
    
    cout<<"Right\n";
    rightRotate(arr,10);

    return 0;

}