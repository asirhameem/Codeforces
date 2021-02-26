#include <iostream>

using namespace std;

int main()
{
    int totalTest;
    cin >> totalTest;
    for(int y = 0; y < totalTest; y++)
    {
        /*

        string given = "";
        for(int i=0; i<tnum; i++)
        {
            string ass;
            cin >> ass;
            given = given + ass;
        }

        cout << given << endl;
        */
        int tnum;
        cin >> tnum;
        string given;
        cin >> given;
        int counter = 0;

        for(int i = 0; i < tnum; i++)
        {
            if(given[i] == '2' && given[i+1] == '0')
            {
                counter++;
            }
        }
        cout << counter << endl;

    }

}
