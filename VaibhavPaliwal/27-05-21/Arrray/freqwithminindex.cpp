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
  const int N= 1e6+2;                  //10^6 +2
  int idx[N];               
  for(int i=0;i<N;i++)
      idx[i]=-1;                      //basically we created an array to store index  
  int ans=0 , min_ = INT_MAX;

  for(int i=0;i<n;i++)
  {
      if(idx[arr[i]] != -1)
      {
          min_=min(min_,idx[arr[i]]);
      }
      else {
          idx[arr[i]]= i;
      } 
  }
  if(min_==INT_MAX)
      cout<<"-1";
  else 
     cout<<min_+1<<endl;
  return 0;
}