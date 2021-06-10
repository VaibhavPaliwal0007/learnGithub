#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
}

void merge(int arr1[], int size1, int arr2[], int size2)
{
    int newArr[size1+size2];
    for(int i=0;i<size1+size2;i++)
    {
        if(i<size1)
            newArr[i]=arr1[i];

        else
            newArr[i]=arr2[i-size1];
    }

    printArray(newArr,size1+size2);

}

int main()
{
    int arr1[]={3,8,7,5,1,9,2,4,6,55}, arr2[]={22,66,44,90,71};

    merge(arr1, 10, arr2, 5);

    return 0;
}