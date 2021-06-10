#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<n;i++) 
    {                                    // while loop 
        int current= arr[i];             //in insertion take second element
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];             //normal swap  arr[i]=arr[i-1]
            j--;
        }
        arr[j+1]=current;
        
    }    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";                             
    return 0;
}