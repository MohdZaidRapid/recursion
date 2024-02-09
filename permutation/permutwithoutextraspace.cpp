#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permute(vector<int> &arr, vector<vector<int>> &ans, int index)
{
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[i], arr[index]);
        permute(arr, ans, index + 1);
        swap(arr[i], arr[index]);
    }
}
int main()
{
    return 0;
}
