#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=2;
    int current=2;                  //2 terms in a sub array will always be  arithmetic 
    int pd=arr[1] - arr[0];         //thats why taking every  variable from 2
    int j=2;
    while (j<n)
    {
        if(pd == arr[j]- arr[j-1])
            current++;
        else
        {
            pd=arr[j]-arr[j-1];
            current=2;
        }
        ans= max(ans,current);
        j++;
    }
    cout<<ans<<" ";
    return 0;
}