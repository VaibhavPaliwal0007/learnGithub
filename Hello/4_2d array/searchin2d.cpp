#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target)
    {
         int rowsize=matrix.size();
         int colsize=matrix[0].size();

         int start=0,end=rowsize*colsize-1;
        
         while(start<=end)
         {
             int mid=start+((end-start)/2);
             
             //as it will give the pos of their current index
             int rowmid=mid/colsize,colmid=mid%colsize;
             
             if(target>matrix[rowmid][colmid])
                 start=mid+1;
             
             else if(target<matrix[rowmid][colmid])
                 end=mid-1;
             
             else
                 return true;
                    
         } 
        return false;
    }
};