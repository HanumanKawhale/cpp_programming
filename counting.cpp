#include <iostream>
using namespace std;

void print(int n)
{

    // base case
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    print(n - 1); // recursive call
}

int main()
{

    int n = 0;
    cout << "enter number  " << endl;
    cin >> n;

    print(n);
}