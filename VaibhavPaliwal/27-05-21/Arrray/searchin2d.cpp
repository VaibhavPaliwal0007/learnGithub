#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int key;
    cin>>key;
    int mat[n][m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)    
        cin>>mat[i][j];
    }
    bool found=false;
    int row=0, col=m-1;
  while(row<n and col>=0)
  {
      if(mat[row][col]==key)
       found=true;
     if(mat[row][col]>key)
       col--;
      else{
      row++; 
     }
  }
  if(found)
    cout<<"element found";
    cout<<"element not found";
   return 0;
}