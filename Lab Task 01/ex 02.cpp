#include <iostream>

using namespace std;

int main()
{
    int counter = 0;

    string line;
    cin >> line;

    for(int i = 0; i < line.size(); i++)
    {
        if(line[i] == 'a' || line[i] == 'A' || line[i] == 'e' || line[i] == 'E' || line[i] == 'i' || line[i] == 'I' || line[i] == 'o' || line[i] == 'O' || line[i] == 'u' || line[i] == 'U' )
        {
            counter = counter + 1;
        }
    }
    cout << counter << endl;
}
