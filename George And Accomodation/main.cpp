#include <iostream>

using namespace std;

int main()
{
    int rooms;
    cin >> rooms;

    int maxStay[100];
    int nowStay[100];
    int can;
    int now;
    for (int i = 0; i< rooms; i++)
    {
        cin >> now;
        nowStay[i] = now;
        cin >> can;
        maxStay[i] = can;
    }

    int counter = 0;

    for(int j = 0; j< rooms; j++)
    {
        if(maxStay[j] - nowStay[j] >= 2)
        {
            counter++;
        }
    }
    cout << counter;
}
