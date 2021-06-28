#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        a[i]=0-a[i];
    }

    int iter=0,max=0;
    for(int i=0;i<n;i++)
    {
        iter+=a[i];
        if(a[i]<0)
        iter=0;
        if(iter>max)
        max=iter;
    }

    cout<<sum+max;
    
}