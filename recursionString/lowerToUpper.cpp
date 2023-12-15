#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void lowerToUpper(string &str, int index)
{
    if (index == -1)
    {
        return;
    }
    str[index] = 'A' + str[index] - 'a';
    lowerToUpper(str, index - 1);
}

int main()
{
    string str = "zaid";
    lowerToUpper(str, 3);
    cout << str;
    return 0;
}
