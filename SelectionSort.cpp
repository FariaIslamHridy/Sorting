#include "SelectionSort.h"
#include <iostream>
using namespace std;
SelectionSort::SelectionSort()
{
}
SelectionSort::~SelectionSort()
{
}

void SelectionSort::SelectionSorter(int arr[], int arr_size)
{
    cout <<"SelectionSort :"<<endl;
    int temp;
    for(int i = 0; i < arr_size - 1; ++i)
    {
        int minValue = i;
        for(int j = i+1; j < arr_size; ++j)
        {
            if(arr[j] < arr[minValue])
                minValue = j;
        }

        temp = arr[minValue];
        arr[minValue] = arr[i];
        arr[i] = temp;

       for(int k = 0; k < arr_size; k++)
        {
            cout << arr[k]<<" ";
        }
    cout <<endl;
    }
}
