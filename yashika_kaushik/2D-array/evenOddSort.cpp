#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

void evenOdd(int arr[], int size)
{
    int t, s=size;
    for(int i=0;i<size;i++)
    {
        if(s<=i)
            break;

        else if(arr[i]%2==0)
        {
            t=arr[i];
            arr[i]=arr[s];
            arr[s]=t;
            s--;
        }
    }

    printArray(arr,size);

}

int main()
{
    int arr[]={3,8,7,5,1,9,2,4,6,55};

    evenOdd(arr,10);

    return 0;
}