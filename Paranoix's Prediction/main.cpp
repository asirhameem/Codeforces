#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int c ;


    for(int j=n+1;j<=m;++j)
    {
        int i=2;
            for(;i<=j-1;i++)
            {
                if(j%i == 0)
                    break;
            }

        if(i==j && i != 2 && j < m)
            {
                c = j;
                break;
            }
        else if(i==j && i != 2 && j == m)
            {
                c = j;
            }
    }

    if( c == m)
    {
        cout << "YES";

    }
    else
        cout << "NO";



}
