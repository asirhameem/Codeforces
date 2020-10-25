#include <iostream>

using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    string result = "NO";
    for (int i = 0; i < n ; i++)
    {
        int x, y;
        cin >> x >> y;

        if(s > x)
        {
            s = s + y;
            result = "YES";
            break;

        }
        else if ( s < x)
        {

            continue;

        }

    }

    cout << result << endl;
}
