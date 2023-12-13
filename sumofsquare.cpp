#include <iostream>
using namespace std;

// 1+2+3+4+5+6
// 1+4+9
//
int sumOfSquare(int n) // 2,1
{
    if (n == 1)
    {
        return 1;
    }

    return n * n + sumOfSquare(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int ans = sumOfSquare(n);
    cout << ans << endl;
    return 0;
}