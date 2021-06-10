#include<iostream>
using namespace std;

int main()
{
    int arr[]={4,5,8,2,5,8,7,2,5,5}; 

    for(int j=0;j<10;j++)
    {
        int flag=0;
        for(int i=0;i<j;i++)
        {
            if(arr[i]==arr[j])
                flag=1;
        }

       if(flag==0)
       {
            cout<<arr[j]<<"\n";
       }
       
    }
    return 0;
}