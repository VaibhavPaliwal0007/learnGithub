#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i]; 
    int sum=0, maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
            sum=0;
        maxsum= max(maxsum,sum);
    }
    cout<<maxsum<<endl;
}