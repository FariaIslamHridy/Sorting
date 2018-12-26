#include "MergeSort.h"
#include <iostream>
using namespace std;
MergeSort::MergeSort()
{
}
MergeSort::~MergeSort()
{
}

int r[100];
void merge(int data[],int low,int mid,int high)
{
    int i,l,temp[100],m,j;
    m=mid+1;
    for(i=low,j=low;j<=mid&&m<=high;)
    {
        if(data[j]<=data[m])
            temp[i++]=data[j++];
        else temp[i++]=data[m++];
    }

    while(j<=mid)
        temp[i++]=data[j++];

    while(m<=high)
        temp[i++]=data[m++];

    for(i=low;i<=high;i++)
        data[i]=temp[i];
}

void divide(int data[],int low,int high, int array_size)
{

    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        divide(data,low,mid,array_size);
        divide(data,mid+1,high,array_size);
        merge(data,low,mid,high);
        for(int k = 0; k < array_size; k++)
        {
            cout << data[k]<<" ";
        }

        cout<<""<<endl;
    }
}

void MergeSort::MergeSorter(int arr[], int arr_size)
{
    cout <<"MergeSort :"<<endl;
    divide(arr, 0, arr_size-1,arr_size);

}
