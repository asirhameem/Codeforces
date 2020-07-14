#include <iostream>

using namespace std;

int main()
{
    int price;

    cin >> price;

    int money;

    cin >> money;

    int quantity;

    cin >> quantity;

    int total = 0;
    int individual = 0;
    for (int i = 1; i <= quantity; i++)
    {
        individual = i*price;
        total = total + individual;
    }

    int borrow = 0;

    borrow = total - money;

    if( borrow < 0)
    {
        borrow = 0;
        cout << borrow ;
    }
    else
        cout << borrow ;






}
