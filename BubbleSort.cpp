#include "BubbleSort.h"
#include <iostream>
using namespace std;
BubbleSort::BubbleSort()
{
}
BubbleSort::~BubbleSort()
{
}
void BubbleSort:: BubbleSorter(int *data, int n)
{
    cout <<"BubbleSort :"<<endl;
    int temp;
    for(int i = 0 ; i<n; i++)
    {
        for (int j = 1 ; j<n-i;j++)
        {
            if (data[j] < data[j - 1])
            {
                temp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = temp;
                for(int k = 0; k < n; k++)
                {
                    cout << data[k]<<" ";
                }
                cout <<endl;
            }

        }
    }
}
