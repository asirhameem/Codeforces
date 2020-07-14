#include <iostream>

using namespace std;

int main()
{

    int w;


    cin>> w;

    if(w>= 1 && w<=100)
    {


    int x = w / 2;

    int y = w-x;


    if(x%2 == 0 && y%2 == 0)
    {
        cout<< "YES" << endl;
    }

    if(x %2 != 0 || y %2 !=0)
    {
        x = x+1;
        y = y-1;
        int z = x+y;
        if(z = w && x%2 == 0 && y%2 == 0 && x !=0 && y != 0)
        {
            cout<< "YES" << endl;
        }

        else
        {
            cout<< "NO"<<endl ;
        }
    }
    if(x %2 != 0 && y %2 !=0 )
    {
        x = x+1;
        y = y-1;
        int z = x+y;
        if(z = w && x%2 == 0 && y%2 == 0 && x != 0 && y != 0 )
        {
            //cout<< x << y << endl;
            cout<< "YES" << endl;
        }

        else
        {
            cout<< "NO"<< endl;
        }
    }
    }
    else
    {
        cout<<"Out of the limit"<<endl;
    }



}
