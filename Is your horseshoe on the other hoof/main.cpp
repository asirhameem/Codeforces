#include <iostream>

using namespace std;

int main()
{
    int shoe;
    int count = 0;
    int colors[4];
    for(int i = 0; i < 4; i++)
    {
        cin >> shoe;
        colors[i] = shoe;
    }

    for(int j = 0; j< 4; j++)
    {
        if( j >= 1 && count >= 2)
            {
                break;
            }
        for(int k = j+1; k < 4; k++)
        {
            if(colors[j] == colors[k] )
            {
                count++;
            }

        }

    }

    cout << count;
}
