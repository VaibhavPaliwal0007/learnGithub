#include<iostream>
#include<vector>

using namespace std;

void exitPoint(int **arr,int rowsize,int colsize)
{ 
    
    int row=0,col=0,direction=0;
    
    while(direction>=0)
    {
        direction = (direction+arr[row][col]) % 4;
        
        if(direction==0) 
           col++;

        else if(direction==1)
           row++;

        else if(direction==2)
           col--;

        else 
           row--;
         
        if(row<0)
        {
            row++;
            break;
        }  
        else if(row==rowsize)
        {
            row--;
            break;
        }  
        else if(col<0)
        {
            col++;
            break;
        } 
        else if(col==colsize) {
            col--;
            break;
        }
    }
    cout<<row<<endl<<col;
}

int main()
{
    int row,col;
    
    cin>>row>>col;
    
    int **arr = new int*[row];
    
    for(int idx=0;idx<row;idx++)
      arr[idx]=new int[col];
      
    for(int rowidx=0;rowidx<row;rowidx++)
    {
        for(int colidx=0;colidx<col;colidx++)
         cin>>arr[rowidx][colidx];
    }
    
    exitPoint(arr,row,col);

    return 0; 
}