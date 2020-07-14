#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    int i = 0;

    int integar[testCase];
    while (i < testCase)
    {

        cin >> integar[i];

        i++;
    }

    sort(integar, integar+testCase);
    string spacedString = "";
    int n;
    for(n = 0; n < testCase; n++)
        {
            spacedString = spacedString + to_string(integar[n]) + " ";

        }


    cout << spacedString;
}
