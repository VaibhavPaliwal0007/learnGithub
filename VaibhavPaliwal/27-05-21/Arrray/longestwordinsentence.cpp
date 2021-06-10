#include<iostream>
#include<string>
using namespace std;
int main()
{
    char n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
  //  cin.ignore();
    int i=0, currLen=0, maxLen=0;
    while(true)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {   
            if(currLen>maxLen)
            {
                maxLen=currLen;
            }
             currLen=0;
        }
        else{
          currLen++;
        }
       if(arr[i]=='\0')
          break;

        i++;
    }
     cout<<maxLen;
     return 0;
}