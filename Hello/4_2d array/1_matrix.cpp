#include<iostream>
using namespace std;

int main()
{
    int row,col;

    cin>>row>>col;

    int **arr = new int*[row];

    for(int idx=0;idx<row;idx++)
     arr[idx]= new int[col];

    //inputting a matrix
    for(int rowelement=0;rowelement<row;rowelement++) 
    {
       for(int colelement=0;colelement<col;colelement++)
         cin>>arr[rowelement][colelement];  
    }

    for(int rowelement=0;rowelement<row;rowelement++)
    {
        for(int colelement=0;colelement<col;colelement++)
          cout<<arr[rowelement][colelement]<<" ";
       
        cout<<endl;
    }
    
    return 0;
}