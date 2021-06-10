#include<iostream>
using namespace std;

int find(int arr[], int size, int value)
{
    int place=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==value)
        {
            place=i;
            break;
        }
    }

    return place;
}

int main()
{
    int arr[10], val;

    cout<<"Enter values";
    for(int i; i<10; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter value to search";
    cin>>val;

    cout<<"Place"<<find(arr, 10, val);

    return 0;

}