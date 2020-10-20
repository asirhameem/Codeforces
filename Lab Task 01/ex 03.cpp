#include <iostream>

using namespace std;

int main()
{
    string line;
    getline(cin,line);
    int counter = 0;

    for (int i = 0; i < line.size() ; i++)
    {
        if(line[i] == ' ')
        {
            counter++;
        }

    }

    cout << counter + 1 << endl;
}
