#include<iostream>
#include<climits>
using namespace std;  
int mostFrequent(int arr[], int n) 
{   
    sort(arr, arr + n); 
    int max_count = 1, res = 0, curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = arr[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = arr[n - 1]; 
    } 
   cout<<max_count<<endl;
    return res; 
}  
int main() 
{  
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];  
    cout << mostFrequent(arr, n); 
    return 0; 
} 