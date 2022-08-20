#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 1; i <= size; i++)
    {

        if (arr[i] == key)
        {

            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[] = {1, 2, 5, 3, 4, 9};

    int size = 6;

    int key = 4;

    bool f = search(arr, size, key);

    cout << "key is present: " << f << endl;
}