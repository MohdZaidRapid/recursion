#include <iostream>
using namespace std;

void printEven(int N)
{

    // if (num > N)
    // {
    //     return;
    // }
    // cout << num << endl;
    // printEven(num + 2, N);
    // if (num == N)
    // {
    //     cout << num << endl;
    //     return;
    // }

    // cout << num << endl;
    // print(num + 1, N);

    //     if (N == 1)
    //     {
    //         cout << 1 << endl;
    //         return;
    //     }

    //     print(N - 1); //54321 //1   print(2-1) ->1
    //     cout << N << endl; //2
    if (N == 2)
    {
        cout << N << endl;
        return;
    }
    printEven(N - 2);
    cout << N << endl;
}

int main()
{
    int N;
    cin >> N;
    if (N % 2 == 1)
    {
        N--;
    }

    printEven(N);
    return 0;
}