#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >>m;

    bool endFlag = false;

    for(int i = 1; i <= n; i++)
    {
        int chk = i / 2;
        for(int j = 1; j <= m; j++)
        {
            if((i % 2 == 0) && j!=m && chk % 2 != 0)
            {
                cout << ".";
                endFlag = true;
            }
            else if(i % 2 == 0 && (j !=  1) && chk % 2 == 0)
            {
                cout << ".";
                endFlag = false;
            }
            else
            {
                cout << "#";
            }

        }
        cout << endl;
    }
}
