#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string answer = "";
    for (int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            answer = "I hate";
        }
        else if(i % 2 == 0)
        {
            answer = answer + " that I love";
        }
        else if(i % 2 != 0)
        {
            answer = answer + " that I hate";
        }
    }
    cout << answer + " it";
}
