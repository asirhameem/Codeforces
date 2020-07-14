#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string guest;
    string host;
    string pile;

    cin >> guest;
    cin >> host;
    cin >> pile;

    string guestNhost = guest + host;

    sort(guestNhost.begin(), guestNhost.end());
    sort(pile.begin(), pile.end());

    if(guestNhost.compare(pile) == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";




}
