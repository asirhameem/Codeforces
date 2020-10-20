#include <iostream>

using namespace std;

int main()
{
    string line;
    cin >> line;

    string rev;


    for ( int i = line.size() - 1; i >= 0 ; i--)
    {

        rev = rev + line[i];

    }

    cout << rev << endl;



}
