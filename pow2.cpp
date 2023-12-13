#include <iostream>
using namespace std;

int powerof2(int num, int n)
{
    if (n == 1)
    {
        return num;
    }

    return num * powerof2(num, n - 1); 
}

int main()
{
    int num, n;
    cin >> num >> n;
    cout << powerof2(num, n);
    return 0;
}