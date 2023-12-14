#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void reverseString(string &str, int start, int end)
{
    if (start >= end)
    {
        cout << str;
        return;
    }
    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    reverseString(str, start + 1, end - 1);
}
int main()
{
    string str = "zaid";
    reverseString(str, 0, 3);
    return 0;
}
