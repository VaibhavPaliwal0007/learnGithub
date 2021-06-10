#include<iostream>
using namespace std;

 
int TernarySearch(int n, int arr[],int key)
{
  //   sort(arr,arr+n);
     
     int st=0,et=n;
     while(st<=et)
     {
         int mid1=st+(et-st)/3;
         int mid2=et-(et-st)/3;
         if(arr[mid1]==key)
           return mid1;
         else if(mid2==key)  
           return mid2;
        else if(key<arr[mid1])
           et=mid1-1;
        else if(arr[mid2] <key) 
           st=mid2+1;
        else{
            st=mid1+1;
            et=mid2-1;
        }
     } 
     return -1;   
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int key;
    
    for(int i=0;i<n;i++)
     cin>>arr[i];  
    cin>>key;

    cout<<TernarySearch(n,arr,key);
    return 0;
}