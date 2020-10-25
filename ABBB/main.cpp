#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;


    for(int i = 0; i < n; i++)
    {
        string line;

        cin >> line;

        while(line.find("AB"))
        {
            int pos = line.find("AB");
            line.erase(pos-1, pos);
        }

        while(line.find("BB"))
        {
            int pos = line.find("BB");
            line.erase(pos-1, pos);
        }

        cout << line << endl;

    }

}
