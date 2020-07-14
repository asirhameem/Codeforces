#include <iostream>

using namespace std;

int main()
{
    int games;
    cin >> games;

    char arr[games];
    char frnd;
    for(int i = 0; i < games; i++)
    {
        cin >> frnd;
        arr[i] = frnd;
    }
    int danik = 0;
    int anton = 0;

    for(int j = 0; j<games; j++)
    {
        if(arr[j] == 'A')
        {
            anton++;
        }
        else if( arr[j] == 'D')
        {
            danik++;
        }
    }
    if(anton > danik)
    {
        cout << "Anton";
    }
    else if(danik > anton)
    {
        cout << "Danik";
    }
    else if( anton == danik)
    {
        cout << "Friendship";
    }
}
