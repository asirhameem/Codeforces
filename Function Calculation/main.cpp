#include <iostream>


using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;
    int result  = i;
    int x = -1;
    while(i <= n)
    {

        sum = sum + (result*=x) * i;
        i++;

    }

    cout << sum;
}
