#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string norm;
    string reve;

    cin >> norm;
    cin >> reve;

    reverse(norm.begin(),norm.end());

    if(reve == norm)
    {
        cout<< "YES";
    }
    else
        cout << "NO";
}
