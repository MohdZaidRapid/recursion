#include <iostream>

using namespace std;

void func1(int n)
{
    if (n == 2)
    {
        cout << n;
        return;
    }

    cout << n << endl;
    func1(n - 2);
}

int main()
{
    func1(50);
    return 0;
}