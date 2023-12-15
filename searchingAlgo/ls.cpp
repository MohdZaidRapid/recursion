#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int X, int index)
{

    if (arr[index] == X)
    {
        return 1;
    }
    return linearSearch(arr, X, index + 1);
}
int main()
{
    int arr[] = {2, 4, 7, 3, 4, 8, 12};
    linearSearch(arr, 2, 7);
    return 0;
}
