#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int sizerow,sizecol;
   
    cin>>sizerow>>sizecol;

    int matrix[sizerow][sizecol];

    for(int rowidx=0;rowidx<sizerow;rowidx++)
    {
        for(int colidx=0;colidx<sizecol;colidx++)
         cin>>matrix[rowidx][colidx];
    }

    int row=0,rowsize=sizerow-1,col=0,colsize=sizecol-1;
        
     while(row<=rowsize && col<=colsize)
     {
        for(int colidx=col;colidx<colsize;colidx++)
         cout<<matrix[row][colidx]<<" ";
            
         row++;

         for(int rowidx=row;rowidx<rowsize;rowidx++)     
         cout<<matrix[rowidx][colsize]<<" ";
        
         colsize--;

         for(int colidx=colsize;colidx<col;colidx--)
            cout<<matrix[rowsize][colidx]<<" ";

        rowsize--;

        for(int rowidx=rowsize;rowidx<row;rowidx--)
         cout<<matrix[rowidx][col]<<" ";

         col++;
    }   
      return 0;
}

        
        
   




