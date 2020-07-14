#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = (k * l) / nl;
    int totalLime = c * d;
    int totalSalt = p / np;



    int mini = min(totalSalt,totalLime);
    int amini = min(totalDrink,mini);

    cout << amini/n;

}
