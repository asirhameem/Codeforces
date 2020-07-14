#include <iostream>

using namespace std;

int main()
{
    int vectors;
    cin >> vectors;

    int arr[100][100];
    int z = 0;
    int m;
     int x = 0;
     int y = 0;

    for (int i = 0; i < vectors; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            cin >> m;
            arr[i][j] = m;
            if( j == 0)
            {
                x = x +m;
            }
            else if( j == 1)
            {
                y = y + m;
            }
            else if( j == 2)
            {
                z = z + m;
            }

        }
    }

    if( x == 0 && y == 0 && z == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO"  << endl;



}
