#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int size, int min, int max)
{
    int range = max - min + 1;
    int *farr = new int[range]();

    for (int i = 0; i < size; i++)
    {
        int idx = arr[i] - min;
        farr[idx]++;
    }

    for (int i = 1; i < range; i++)
    {
        farr[i] += farr[i - 1];
    }

    int *ans = new int[size];
    for (int i = size - 1; i >= 0; i--)
    {
        int val = arr[i];
        int pos = farr[val - min] - 1;
        ans[pos] = val;
        farr[val - min]--;
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = ans[i];
    }

    delete[] farr;
    delete[] ans;
}

int main()
{
    int arr[] = {3, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = *min_element(arr, arr + size);
    int max = *max_element(arr, arr + size);

    countSort(arr, size, min, max);

    // Printing the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}