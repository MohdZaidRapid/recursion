#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArraySum(int arr[], int index, int n, int sum)
{
    if (n == index)
    {
        cout << sum << endl;
        return;
    }

    printArraySum(arr, index + 1, n, sum);
    printArraySum(arr, index + 1, n, sum + arr[index]);
}

using namespace std;
int main()
{
    int arr[] = {1,2,3,4};
    int sum = 0;
    printArraySum(arr, 0, 4, sum);

    return 0;
}
