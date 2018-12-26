

#include <iostream>
#include "SelectionSort.h"
#include "MergeSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"

using namespace std;

int main()
{
    BubbleSort Bs;
    int d[8] = {14,33,27,10,35,19,48,44};
    int q = sizeof(d)/sizeof(d[0]);
    Bs.BubbleSorter(d,q);

    SelectionSort Ss;
    int a[8] = {14,33,27,10,35,19,48,44};
    int n = sizeof(a)/sizeof(a[0]);
    Ss.SelectionSorter(a,n);

    InsertionSort Is;
    int b[8] = {14,33,27,10,35,19,48,44};
    int o = sizeof(b)/sizeof(b[0]);
    Is.InsertionSorter(b,o);

    MergeSort Ms;
    int c[8] = {33,14,27,10,35,19,48,44};
    int p = sizeof(c)/sizeof(c[0]);
    Ms.MergeSorter(c,p);

    cout << "Hello world!"<< endl;
    return 0;
}
