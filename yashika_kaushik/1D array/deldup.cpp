#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

void deldup(int arr[], int size)
{
    for(int j=0;j<=size;j++)
    {
        int flag=0;
        for(int i=0;i<j;i++)
        {
            if(arr[i]==arr[j])
                flag=1;
        }

        if(flag==1)
        {
            for(int k=j;k<size-1;k++)
                arr[k]=arr[k+1];

            size--;
            j--;
        }
    }

    printArray(arr,size);

}

int main()
{
     int arr[]={3,8,7,3,3,8,6,55,9,6};

    
    deldup(arr,10);

    return 0;
    
}