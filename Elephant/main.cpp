#include <iostream>

using namespace std;

int main()
{
    int dis;
    cin >> dis;

    int step =0;

    if(dis % 5 == 0)
    {
        step = dis / 5;
    }
    else if(dis < 5)
    {
        step = 1;
    }
    else
    {
        int mod = dis % 5;
        if(mod < 5)
        {
            step = (dis / 5) +1;
        }
    }



    cout << step << endl;


}
