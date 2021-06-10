#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    char arr[n+1];                //null character denoted by '\0' thats why  we have taken n+1
    cin>>arr;
    bool check =1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] !=arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check==true)
        cout<<"Given word is Palindrome"<< "\n";
    else 
        cout<<"Given word is not Palindrome"<<"\n";
    return 0;
}