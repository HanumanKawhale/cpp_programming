#include <iostream>
using namespace std;

int main()
{

  int arr[] = {1, 2, 3, 4};

  int n = 4;

  for (int i = 0; i <= 3; i = i + 2)
  {
    // swap(arr[i],arr[i+1]);
    int temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
  }

  for (int i = 0; i <= 3; i++)
  {
    cout << arr[i];
  }

  return 0;
}