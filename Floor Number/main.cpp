#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int n , x;

    for(int l = 0; l < t; l++)
    {
        cin >> n >> x;
        int y = 0;

        if(n-2 < 0)
        {
            y = 0;
        }
        else{
            y = n -2;
        }
        float floor = (float) y / (float)(x) ;

        cout << ceil(floor) + 1 <<endl;


    }
}
