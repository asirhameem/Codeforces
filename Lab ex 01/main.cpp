#include <iostream>

using namespace std;

int main()
{
    string line;

    getline(cin, line);
    int i = 0;
    while(line[i] != '\0')
    {
        i++;
    }
    cout << i <<" characters"<< endl;
}
