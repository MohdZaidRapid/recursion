#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int SumArray(int arr[], int index, int n)
{
    if (index == n)
    {
        return 0;
    }
    return arr[index] + SumArray(arr, index + 1, n);
}

int main()
{

    int arr[] = {3, 4, 5, 8, 2};
    cout << SumArray(arr, 0, 5);
    return 0;
}
