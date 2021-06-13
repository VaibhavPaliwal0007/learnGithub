#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

int freq(int arr[], int size, int loc)
{
    int fre=1;
    for(int i=loc+1;i<size;i++)
    {
        if(arr[loc]==arr[i])
            fre++;
    }

    return fre;

}

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
            cout<<"\nFreq of "<<arr[j]<<"= "<<freq(arr,10,j);
       }
       
    }

    return 0;
    
}