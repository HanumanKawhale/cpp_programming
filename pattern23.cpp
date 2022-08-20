#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int number = 1;

    /*  for(int row=1;row<=n;row++) {


          for( int col=1;col<=row;col++) {
              cout <<  number << " ";
              number =number+1;

          }
          cout << endl;


      }

    for (int row = 1; row <= n; row++)
    {
          int value=row;
        for (int col = 1; col <= row; col++)
        {
            cout << value<< " ";
            value = value + 1;
        }
        cout << endl;
    }
   */
    for (int row = 1; row <= n; row++)
    {
        // int value=row;
        for (int col = 1; col <= row; col++)
        {
            cout << row - col + 1 << " ";
            //  value = value + 1;
        }
        cout << endl;
        
    }
}