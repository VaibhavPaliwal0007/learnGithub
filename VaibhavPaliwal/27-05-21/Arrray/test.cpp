#include<bits/stdc++.h>  
using namespace std;

void CeilandFloor(int * arr,int size,int data)
{
    int left=0,right=size-1,ceil=0,floor=0;

    while(left<right)
    {
        int mid = left+(right-left)/2;

        if(data>arr[mid])
        {
            left = mid+1;
            ceil = mid;
        }

        else if(data<arr[mid])
        {
            right=mid-1;
            floor=mid;
        }

        else{
            cout<<ceil<<endl;
            cout<<floor<<endl;
        }
  }
}

int main()
{
    int size;

    cin>>size;

    int* arr = new int[size];

    for(int idx=0;idx<size;idx++)
     cin>>arr[idx];

    int data; 

    cin>>data; 


    return 0;
}