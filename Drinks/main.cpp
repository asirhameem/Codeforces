#include <iostream>

using namespace std;

int main()
{
    int drinks;
    cin >> drinks;

    float totalVolume = 0;
    for(int i = 0; i < drinks; i++)
    {
        int volume;
        cin >> volume;

        totalVolume = totalVolume + volume;

    }

    float perInOne = totalVolume / drinks;

    cout << perInOne;
}
