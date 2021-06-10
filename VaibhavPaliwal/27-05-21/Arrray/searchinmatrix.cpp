#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    int arr[n][m];
    cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>arr[i][j]; 
    }
      
    bool flag=false;
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<i<<" "<<j;
                flag=true;
            }
        }
        cout<<endl;
    }
    if(flag)
    {
        cout<<"the element is found"<<endl;
    }
    else{
        cout<<" element is not found"<<endl;
    }
        return 0;
}