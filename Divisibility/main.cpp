#include <iostream>

using namespace std;

int main()
{
    int time;
    cin >> time;
    int answer[time];
    for(int i = 0; i < time; i++)
    {
        int a, b;
        cin >> a >> b;
        for(int j = a; j % b == 0 ; j++ )
        {
            if(j % b == 0)
            {
                answer[i] = j - a;
                break;
            }
        }
    }
    for(int n = 0; n < time; n++)
    {
        cout << answer[n]<< endl;
    }
}
