#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    int j;



    int arr[100][100];
    for(int a = 1 ; a < 6; a++)
    {
        for(int b = 1; b < 6 ; b++)
        {
            cin >> n;
            arr[a][b] = n;
            if( arr[a][b] == 1)
            {
                i = a;
                j = b;
            }
        }
    }


    int step = 0;


    if(i < 3)
    {
        for (int x = i; x < 4; x++)
        {
            if(x == 3 )
                break;
            step++;
        }
    }
    if (i > 3)
    {
        for (int y = i ; y > 2; y--)
        {
            if( y == 3)
                break;
            step++;
        }
    }
    if(j < 3)
    {
        for (int p = j; p < 4; p++)
        {
            if(p == 3 )
                break;
            step++;
        }
    }
    if (j > 3)
    {
        for (int q = j ; q > 2; q--)
        {
            if( q == 3)
                break;
            step++;
        }
    }


    cout << step << endl;




}
