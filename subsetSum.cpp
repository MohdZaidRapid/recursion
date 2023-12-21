#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArraySum(int arr[], int index, int n, int sum, vector<int> &ans)
{
    if (n == index)
    {
        ans.push_back(sum);
        return;
    }

    printArraySum(arr, index + 1, n, sum, ans);
    printArraySum(arr, index + 1, n, sum + arr[index], ans);
}

using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    vector<int> ans;
    printArraySum(arr, 0, 4, 0, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}

// time O(2^n)
// space O(n)