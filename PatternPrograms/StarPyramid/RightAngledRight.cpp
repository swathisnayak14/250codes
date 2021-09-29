//         *
//       * *
//     * * *
//   * * * *
// * * * * *

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 1;
    // cin >> n;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= m; k++)
        {
            cout << "*";
        }
        cout << endl;
        m++;
    }
    return 0;
}