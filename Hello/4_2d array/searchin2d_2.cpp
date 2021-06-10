#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) 
    { 
        int row = 0;
        int col = matrix[0].size()-1;
       
        //as it is sorted in rows and cols
        while(row<matrix.size() && col>=0)
        {
            int element = matrix[row][col];
            
            if(element==target)
                return true;
            
            else if(element>target)
                col--;
            
            else
                row++;
        }      
       return false; 
    }
};