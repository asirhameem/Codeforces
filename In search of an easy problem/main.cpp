#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int op;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if(op == 1)
        {
            c++;
        }
    }



    if(c > 0)
        {
            cout << "HARD";
        }
    else
        {
            cout << "EASY";
        }
}
