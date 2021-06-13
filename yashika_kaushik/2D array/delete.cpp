#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

void del(int arr[], int size, int location)
{
    
    for(int i=0;i<size-1;i++)
    {
        if(i>=location)
            arr[i]=arr[i+1];

            
    }
    
    printArray(arr,size-1);
}

int main()
{
    int arr[]={3,8,7,5,1,9,2,4,6,55}, val, loc;

    cout<<"\nEnter location";
    cin>>loc;

    del(arr,10,loc);

    return 0;

}