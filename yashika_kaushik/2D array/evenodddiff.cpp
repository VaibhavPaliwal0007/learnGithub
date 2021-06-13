#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

void evenOddDiff(int arr[], int size)
{
    int even[size], odd[size], j=0, k=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }

        else
        {
            odd[k]=arr[i];
            k++;
        }
    }

    cout<<"Even\n";
    printArray(even,j-1);
    cout<<"Odd\n";
    printArray(odd,k-1);
}

int main()
{
    int arr[]={3,8,7,5,1,9,2,4,6,55}, val, loc;

    evenOddDiff(arr,10);

    return 0;
}