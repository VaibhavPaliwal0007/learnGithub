#include<iostream>
using namespace std;

void Matrixinput(int** arr,int row,int col)
{
    for(int rowidx=0;rowidx<row;rowidx++)
    {
        for(int colidx=0;colidx<col;colidx++)
          cin>>arr[rowidx][colidx];
    }
}

void Matrixoutput(int **arr,int row,int col)
{
    for(int rowidx=0;rowidx<row;rowidx++)
    {
        for(int colidx=0;colidx<col;colidx++)
          cout<<arr[rowidx][colidx]<<" ";
        
        cout<<endl;
    }
}

void MultiplicationofArr(int** arr1,int** arr2,int** result,int row1,int col1,int row2,int col2)
{
    if(col1!=row2)
    {
        cout<<-1;
        return;
    }
    
    for(int rowidx=0;rowidx<row1;rowidx++)
    {
        for(int colidx=0;colidx<col2;colidx++)
        {
            for(int mulidx=0;mulidx<col1;mulidx++)
               result[rowidx][colidx] += arr1[rowidx][mulidx] * arr2[mulidx][colidx];
        }
    }

}

int main()
{
    int row1,col1;

    cin>>row1>>col1;
    int **arr1 = new int*[row1];

     for(int idx=0;idx<row1;idx++)
      arr1[idx] = new int[col1];
    

    Matrixinput(arr1,row1,col1);

    int row2,col2;

    cin>>row2>>col2;

     int **arr2 = new int*[row2];

     for(int idx=0;idx<row2;idx++)
      arr2[idx] = new int[col2];
    

    Matrixinput(arr2,row2,col2);

    int **result = new int*[row1];

    for(int idx=0;idx<row1;idx++)
     result[idx]=new int[col2];

    for(int rowidx=0;rowidx<row1;rowidx++)
    {
        for(int colidx=0;colidx<col2;colidx++)
          result[rowidx][colidx]=0;
    }
    
    MultiplicationofArr(arr1,arr2,result,row1,col1,row2,col2);
    Matrixoutput(result,row1,col2);

    return 0;
}