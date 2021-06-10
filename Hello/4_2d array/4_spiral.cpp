#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> >& matrix) 
    {
        vector<int> ans;

        int rowsize = matrix.size()-1;
        int colsize = matrix[0].size()-1;
        int row=0,col=0,count=1; 
        int range = matrix.size()*matrix[0].size();
        
        while(count<=range)
        {  
           //right
           for(int colidx=col;colidx<=colsize && count<=range;colidx++)
           {
               ans.push_back(matrix[row][colidx]);
               count++;
           }
            
           row++;
            
           //down
           for(int rowidx=row;rowidx<=rowsize && count<=range;rowidx++)     
           {
               ans.push_back(matrix[rowidx][colsize]);
               count++;
           }
            
           colsize--;
            
           //left
           for(int colidx=colsize;colidx>=col && count<=range;colidx--)
           {
              ans.push_back(matrix[rowsize][colidx]);
               count++;
           }
            
           rowsize--;
            
           ///up 
           for(int rowidx=rowsize;rowidx>=row && count<=range;rowidx--)
           {
               ans.push_back(matrix[rowidx][col]);
               count++;
           }
            
           col++;                    
        }
        return ans;
    }
};