//Program to find the maximum number of handshakes

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int people;
    cin >> people;
    int handshakes;
    int max = people * (people - 1) / 2; //max handshakes
    cout << max;
    return 0;
}