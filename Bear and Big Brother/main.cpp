#include <iostream>

using namespace std;

int main()
{
    int limak;
    int bob;

    cin >> limak;
    cin >> bob;
    int years = 0;
    for(int i = 1; i < 100; i++)
    {
        bob = bob * 2;
        limak = limak *3;
        if(limak > bob)
        {
            years = i;
            break;

        }
    }
    cout << years;


}
