#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void printArray(int arr[], int index, int n)
// {
//     if (index == n)
//     {
//         return;
//     }
//     // cout << arr[index] << endl;

//     cout << arr[index] << endl;
//     printArray(arr, index + 1, n);
// }

void printArray(int arr[], int index)
{
    if (index == -1)
    {
        return;
    }
    // cout << arr[index] << endl;

    cout << arr[index] << endl;
    printArray(arr, index - 1);
}

int main()
{
    int arr[] = {3, 7, 6, 2, 5};

    printArray(arr, 4);
    return 0;
}
