#include <iostream>


using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int count = 0;

    if(n % 2 == 0)
    {
        count = n/2;
    }
    if(n%2 ==1)
    {
        count = (n-1)/2 - n;
    }

    cout << count;
}
