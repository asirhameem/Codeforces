#include <iostream>

using namespace std;

int main()
{
    int contest;
    cin >> contest;
    int points;
    int conPoints[contest];
    int maxPoint = 0;
    int minPoint = 0;
    int count = 0;
    for (int i = 0; i < contest; i++)
    {
        cin >> points;
        conPoints[i] = points;
        if((maxPoint == 0 && i == 0 ) || ( minPoint == 0 && i == 0 ))
        {
            maxPoint = points;
            minPoint = points;
            continue;
        }
        if(points < minPoint)
        {
            minPoint = points;
            count++;

        }
        if(points > maxPoint)
        {
            maxPoint = points;
            count++;
        }
    }

    cout << count ;
}
