#include<bits/stdc++.h>
using namespace std;

/*
   first we will take the ring we want to rotate in a given matrix
   then we will store the ring in an array
   we will rotate the arrray from the position which we want to rotate 
   then we will again insert the array in a form of a ring in the given matrix
*/

void matrixInput(int** arr,int rows,int cols)
{
    for(int row=0;row<rows;row++)
    {
        for(int col=0;col<cols;col++){
         cin>>arr[row][col];
        }
    }
}

void matrixOutput(int** arr,int rows,int cols)
{
    for(int row=0;row<rows;row++)
    {
        for(int col=0;col<cols;col++){
         cout<<arr[row][col]<<" ";
        }   
        cout<<endl;
    }
}

void reverseArr(int* arr, int left,int right)
{
    while(left<right)
    {
        int temp = arr[left];
        
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

void rotateArr(int* arr,int postorotate,int size)
{
    bool negative = false;

    if(postorotate<0)
    {
        postorotate = -postorotate;
        negative = true;
    }

    postorotate %= size;

    if(negative){
     postorotate = size - postorotate;
    }

    reverseArr(arr,0,size-postorotate-1);
    reverseArr(arr,size-postorotate,size-1);  

    reverseArr(arr,0,size-1); 
}

int* takeringfromMatrix(int** matrix,int rows,int cols,int nthRing)
{
    int rowmin = nthRing - 1;
    int colmin = nthRing - 1;
    int rowmax = rows - nthRing;
    int colmax = cols - nthRing;

    int sizeofarr = 2*(rowmax-rowmin+colmax-colmin);
    int idx = 0;

    int* arr = new int[sizeofarr];

    //bottom 
    for(int rowidx=rowmin,colidx=colmin;rowidx<=rowmax;rowidx++)
    {
        arr[idx] = matrix[rowidx][colidx];
        idx++;
    } 

    //right
    for(int colidx=colmin+1,rowidx=rowmax;colidx<=colmax;colidx++)
    {
        arr[idx] = matrix[rowidx][colidx];
        idx++;
    }

    //top 
    for(int rowidx=rowmax-1,colidx=colmax;rowidx>=rowmin;rowidx--)
    {
        arr[idx] = matrix[rowidx][colidx];
        idx++;
    }
    
    //left
    for(int colidx=colmax-1,rowidx=rowmin;colidx>=colmin+1;colidx--)
    {
        arr[idx] = matrix[rowidx][colidx];
        idx++;
    }

    return arr;
}

void insertringinMatrix(int** matrix,int rows,int cols,int nthRing,int* arr)
{
    int rowmin = nthRing - 1; 
    int colmin = nthRing - 1;
    int rowmax = rows - nthRing;
    int colmax = cols - nthRing;

    int sizeofarr = 2*(rowmax-rowmin+colmax-colmin);
    int idx = 0;
    
    //bottom 
    for(int rowidx=rowmin,colidx=colmin;rowidx<=rowmax;rowidx++)
    {
        matrix[rowidx][colidx] = arr[idx];
        idx++;
    } 

    //right
    for(int colidx=colmin+1,rowidx=rowmax;colidx<=colmax;colidx++)
    {
        matrix[rowidx][colidx] = arr[idx];
        idx++;
    }

    //top 
    for(int rowidx=rowmax-1,colidx=colmax;rowidx>=rowmin;rowidx--)
    {
        matrix[rowidx][colidx] = arr[idx];
        idx++;
    }
    
    //left
    for(int colidx=colmax-1,rowidx=rowmin;colidx>=colmin+1;colidx--)
    {
        matrix[rowidx][colidx] = arr[idx];
        idx++;
    }    
}

void rotateRing(int** matrix,int nthRing,int postoRotate,int rows,int cols)
{
    int rowmin = nthRing - 1;
    int colmin = nthRing - 1;
    int rowmax = rows - nthRing;
    int colmax = cols - nthRing;

    int sizeofarr = 2*(rowmax-rowmin+colmax-colmin);

    int* arr = new int[sizeofarr];

    arr = takeringfromMatrix(matrix,rows,cols,nthRing);
    rotateArr(arr,postoRotate,sizeofarr);
    insertringinMatrix(matrix,rows,cols,nthRing,arr);
}

int main()
{
    int rows,cols;
    
    cin>>rows>>cols;
    
    int** matrix = new int*[rows];

    for(int idx=0;idx<rows;idx++){
      matrix[idx] = new int[cols];
    }
    
    matrixInput(matrix,rows,cols);

    int nthRing,postorotate;

    cin>>nthRing>>postorotate;

    rotateRing(matrix,nthRing,postorotate,rows,cols);
    matrixOutput(matrix,rows,cols);

    return 0;
}


