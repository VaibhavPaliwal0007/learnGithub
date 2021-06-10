#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int Maxtilli= INT_MIN; 
    for(int i=0;i<=n;i++)
    {
        Maxtilli= max(Maxtilli,arr[i]);
        cout<<Maxtilli<<" ";
    }
    return 0;
}