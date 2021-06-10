#include<iostream>
#include<climits>
using namespace std;
int main()
{
      int n;
      cin>>n;

      int arr[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }

     int current=0, maxsum= INT_MIN;

     for(int i=0;i<n;i++)
     {
         current=0;
         for(int j=i;j<n;j++)
         {
         current +=arr[j];
         //cout<<current<<" ";                  //for maximum sum xd better than o[n^3]
         
         }
         maxsum=max(maxsum,current);
     }
     cout<<maxsum<<endl;
     return 0;
}        
     
    