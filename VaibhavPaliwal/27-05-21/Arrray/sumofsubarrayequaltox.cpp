#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i=0 , j=0, st=-1, et=-1, sum=0;   
while(j<n && sum+arr[j]<=s)                          //j signifies last term i signifies first term 
{
    sum+=arr[j];
    j++;
}
if(sum==s)
{
    cout<<i+1<<"  "<<j<<endl;
    return 0;
}
while(j<n)
{
   sum+= arr[j];
   while(sum>s)
   {
       sum-=arr[i];                                   //so that st may shift to right
       i++;
   }
   if(sum==s)
   {
       st= i+1;
       et=j+1;
       break;
   }
   j++;
}
cout<<st<<" "<<et<<endl;
return 0;
}
