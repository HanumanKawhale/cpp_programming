#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4};

    int n = 4;
    int Star = 0;
    int end = 3;

    while (Star <= end)
    {
        swap(arr[Star], arr[end]);
        Star++;
        end--;
    };

    for (int i = 0; i <= 3; i++)
    {
        cout << arr[i];
    }

    return 0;
}