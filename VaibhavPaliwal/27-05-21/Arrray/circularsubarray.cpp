#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n)
{
    int sum=0,max_=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
            sum=0;
        max_=max(max_,sum);
    }
    return max_;
}

int main()
{
    int n,wrapsum=0,nonwrapsum=0,totalsum=0,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    nonwrapsum=kadane(arr,n);
    for(int i=0;i<n;i++)
    {
      totalsum+=arr[i];
      arr[i]=-arr[i];
     
    } 
     wrapsum= totalsum + kadane(arr,n);           //non contributing element
    ans=max(wrapsum,nonwrapsum);
    cout<<ans;
    return 0;    
}