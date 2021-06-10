#include<iostream>
using namespace std;

// void increment(int a)       //call by value
// {
//     a++;
// }

// int main()
// {
//     int a=10; 
//     increment(a);
//     cout<<a;       
//     return 0;
// }

void swap(int *a,int *b)        //different variable
{
    int temp=*a;                  //call by reference
    *a=*b;
    *b=temp;  
}




int main()
{
    int a=2,b=4;
    swap(&a,&b);          //dereference
    cout<<a<< " "<<b;
    return 0;
}
    