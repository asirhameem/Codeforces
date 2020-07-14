#include <iostream>

using namespace std;

int main()
{
    int frnds;
    cin >> frnds;
    int fence;
    cin >> fence;

    int hgt;
    int width = 0;

    for (int i = 0; i < frnds; i++)
    {
        cin >> hgt;

        if(hgt > fence)
        {
            width = width + 2;
        }
        else
            width = width + 1;
    }
    cout << width;
}
