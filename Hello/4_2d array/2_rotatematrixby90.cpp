#include<iostream>
using namespace std;

void rotateMatrix(int** arr,int num)
{
    int rowsize=num-1,colsize=num-1;
    
    for(int col=0;col<=colsize;col++)
    {
        for(int row=rowsize;row>=0;row--)
         cout<<arr[row][col]<<" ";
         
        cout<<endl;
    }
}

int main()
{
    int num;
    
    cin>>num;
    
    int** arr = new int*[num];
    
    for(int idx=0;idx<num;idx++)
      arr[idx] = new int[num];
     
    for(int row=0;row<num;row++)
    {
        for(int col=0;col<num;col++)
         cin>>arr[row][col];
    }
    
    rotateMatrix(arr,num);
    
    return 0;
}