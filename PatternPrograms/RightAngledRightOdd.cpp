//                 *
//             * * *
//         * * * * *
//     * * * * * * *
// * * * * * * * * *

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 16, s = 1;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << " ";
        }
        k = k - 4;
        for (int j = 1; j <= s; j++)
        {
            cout << "* ";
        }
        s += 2;
        cout << endl;
    }
    return 0;
}