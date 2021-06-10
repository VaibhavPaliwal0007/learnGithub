#include<iostream>
using namespace std;

void reverse(int* arr, int n)
{
    int idx=0,reverseidx=n-1;
    
    while(idx<reverseidx)
    {
        int temp = arr[idx];
        arr[idx] = arr[reverseidx];
        arr[reverseidx]=temp;
        
        idx++;
        reverseidx--;
    }
    
}

void display(int* arr, int n)
{
    for(int i = 0 ; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    display(arr,n);
}