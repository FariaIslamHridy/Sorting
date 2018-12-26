#include "InsertionSort.h"
#include <iostream>
using namespace std;
InsertionSort::InsertionSort()
{
}
InsertionSort::~InsertionSort()
{
}
void InsertionSort::InsertionSorter(int arr[], int arr_size)
{
     cout <<"InsertionSort :"<<endl;
    if(arr_size > 1)
    {
        int j;
        for(int i = 1; i < arr_size; ++i)
        {
            int key = arr[i];
            for(j = i-1 ; j>=0 ; j--)
            {
                if(arr[j] > key)
                    arr[j+1] = arr[j];
                else break;
            }
            arr[j+1] = key;
            for(int k = 0; k < arr_size; ++k)
            {
                cout << arr[k]<<" ";
            }
    cout <<endl;
        }

    }
}
