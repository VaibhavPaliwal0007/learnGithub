#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

void insert(int arr[], int size, int val, int location)
{
    int newArr[size+1];
    for(int i=0;i<=size;i++)
    {
        if(i<location)
            newArr[i]=arr[i];

        else if(i==location)
            newArr[i]=val;

        else
            newArr[i]=arr[i-1];
    }

    
    printArray(newArr,size+1);

}

int main()
{
    int arr[]={3,8,7,5,1,9,2,4,6,55}, val, loc;

    cout<<"Enter value to insert";
    cin>>val;
    cout<<"\nEnter location";
    cin>>loc;

    insert(arr,10,val,loc);

    return 0;

}