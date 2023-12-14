#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPal(string str, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    if (str[start] != str[end])
    {
        return 0;
    }
    else
    {
        return checkPal(str, start + 1, end - 1);
    }
}

int main()
{
    string str = "namon";
    cout << checkPal(str, 0, 4);

    return 0;
}
