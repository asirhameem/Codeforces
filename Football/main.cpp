#include <iostream>
#include <string>
using namespace std;

int main()
{
    string players;
    cin >> players;
    int len = players.length();

    int counter = 1;
    for (int i = 0; i <len; i++)
    {
        if(players[i] == players[i+1])
        {
            counter++;

        }
        else if(players[i] != players[i+1] && counter < 7)
        {
            counter = 1;
        }
    }
    if(counter >= 7)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" << endl;
    }

}
