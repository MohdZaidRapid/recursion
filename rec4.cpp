#include <iostream>
using namespace std;

int fact(int N)
{
    if (N == 0)
    {
        return 1;
    }

    return N * fact(N - 1);
}

int main()
{
    int N;
    cin >> N;
    if (N < 0)
    {
        cout << "Factorial is not possible" << endl;
        return 0;
    }

    int ans = fact(N);
    cout << ans;
    return 0;
}