#include <iostream>

using namespace std;

int main()
{
    int teams;
    cin >> teams;

    int colors[teams][2];

    for(int i = 0; i< teams; i++)
    {
        cin >> colors[i][0];
        cin >> colors[i][1];
    }
}
