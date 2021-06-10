#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0, currLen=0, maxLen=0, st=0, maxst=0;
    while(true)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {   
            if(currLen>maxLen)
            {
                maxLen=currLen;
                maxst=st;
            }
             currLen=0;
             st=i+1;
        }
        else
          currLen++;
       if(arr[i]=='\0')
          break;
        i++;
    }
     cout<<maxLen<<endl; 
     for(int i=0;i<maxLen;i++)    //maxlen se km hoga lol 
      cout<<arr[maxst+i]<<endl;
     return 0;
}