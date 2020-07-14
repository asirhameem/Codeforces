#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int a[t];
    int count = 0;

    for(int i = 0; i < t; i++)
    {
        int test;
        cin >> test;
        if(test % 2 == 0)
        {
            int ans = (test / 2) - 1;
            a[count] = ans;
            count++;

        }
        else if(test % 2 != 0)
        {
            int answer = (test - (test/2)) - 1;
            a[count] = answer;
            count++;
        }

    }
    for(int j = 0; j < t; j++)
    {
        cout << a[j] << endl;
    }

}
