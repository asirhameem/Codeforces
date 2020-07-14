#include <iostream>

using namespace std;

int main()
{
    int num;
    int sub;
    cin >> num;
    cin >> sub;

    for (int n = 0; n < sub; n++)
    {
        if(num % 10 == 0)
        {
            num = num / 10;
        }
        else
            num = num -1;

    }
    cout << num << endl;
}
