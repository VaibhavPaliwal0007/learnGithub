#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int num;
    
    cin>>num;
    
    int row=num,col=num;
    
    vector<vector<int> > ans(row,vector<int> (col));
    
    for(int rowidx=0;rowidx<row;rowidx++)
    {
        for(int colidx=0;colidx<col;colidx++)
         cin>>ans[rowidx][colidx];
    }
    
    vector<int> result;
    
    //as we need elements in snake pattern
    for(int colidx=0;colidx<col;colidx++)
    {
        for(int rowidx=0,cols=colidx;cols<col;rowidx++,cols++)
          result.push_back(ans[rowidx][cols]);
    }
    
    //  cout<<idx<<endl;
     
    return 0;
}