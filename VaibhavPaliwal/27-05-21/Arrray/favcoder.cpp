#include <iostream>
#include <algorithm>
using namespace std ;
int main()
{
    int n=0;
    int x=0;
   
    cin>>n;
    int array[n] ;
    for(int i = 0 ; i < n ; i++){
        cin>>array[i];
    }
    int min= array[0] , max = array[0] ;
    for(int i = 1 ; i < n ; i++)
       {
        if(min > array[i])
        {
            x ++ ;
            min = array[i] ;
        }else if(max < array[i]){
            x ++;
            max = array[i] ;
        }
    }
    cout<<x;
    return 0; 
}