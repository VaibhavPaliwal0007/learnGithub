#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
    int startingterm=0;
    int endingtterm=n;
    while(startingterm<=endingtterm)
    {
        int mid= startingterm+ endingtterm/2;
        if(arr[mid]==key) 
         return mid;
       else if(arr[mid]<key)
            startingterm= mid+1;
        else
         endingtterm = mid -1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    cout<<BinarySearch(arr,n,key)<<endl;
    return 0;
}