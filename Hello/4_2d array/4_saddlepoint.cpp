#include<iostream>
using namespace std;

void saddlePoint(int** arr,int num)
{
    for(int row=0;row<num;row++)
    {
        int saddlecol = 0;
        bool check = true;
        
        for(int col=1;col<num;col++)
         if(arr[row][col]<arr[row][saddlecol])
           saddlecol=col;
           
        for(int saddlerow=0;saddlerow<num;saddlerow++)
         if(arr[saddlerow][saddlecol]>arr[row][saddlecol])
         {
             check=false;
             break;
         }
         
         if(check){
          cout<<arr[row][saddlecol]<<endl;
          return;
         }
    }
    cout<<"Invalid input"<<endl;
}

int main()
{
    int num;
    
    cin>>num;
    
    int** arr = new int*[num];
    
    for(int idx=0;idx<num;idx++)
     arr[idx]=new int[num];
     
    for(int row=0;row<num;row++)
    {
        for(int col=0;col<num;col++)
         cin>>arr[row][col];
    }
    
    saddlePoint(arr,num);
    
    return 0;
}