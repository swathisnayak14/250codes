//Program to calculate the area of a circle

#include <bits/stdc++.h>
using namespace std;
int main()
{
    float radius;
    cin >> radius;
    float area = 3.14 * (pow(radius, 2));
    cout << area;
    return 0;
}