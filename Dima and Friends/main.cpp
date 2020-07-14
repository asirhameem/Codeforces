#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = (n*5)+5;
    int now = 0;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        now = now + val;
    }

    int ans = total - now;

    if( ans % 2 == 0)
    {
        cout << ans  << endl;
    }
    else if( ans % 2 != 0)
    {
        cout << ans  << endl;
    }
}
