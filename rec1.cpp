#include <iostream>

using namespace std;

void func1(int n)
{
    if (n == 1)
    {
        cout << n << " oh stupid";
        return;
    }
    if (n == 0)
    {
        cout << "happy birthday";
        return;
    }
    cout << n << " days left for birthday" << endl;
    func1(n - 1);
}

int main()
{
    func1(5);
    return 0;
}