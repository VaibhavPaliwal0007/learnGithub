#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n]; 
    int max_= INT_MIN;
    int ans=0;
    for(int i=0;i<n;i++)
     cin>>arr[i];
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max_ && arr[i+1]<arr[i])
            ans++;
        max_= max(max_,arr[i]);
    }
        cout<<ans<<" ";
        return 0;
    }      