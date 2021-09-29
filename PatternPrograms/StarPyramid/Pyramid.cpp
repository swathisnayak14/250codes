//    *
//   ***
//  *****
// *******
//*********

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, k=0;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        while (k != (2 * i - 1))
        {
            cout << "*";
            k++;
        }
        k = 0;
        cout << endl;
    }
    return 0;
}