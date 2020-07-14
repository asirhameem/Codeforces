#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string num;
    cin >> num;


    int len = num.length();
    int counter = 0;


    for(int i = 0; i < len; i++)
    {
        if(num[i] == '4' || num[i] == '7')
        {
            counter++;
        }
    }

    if(counter == 4 || counter == 7)
    {
        cout << "YES";
    }
    else

        cout << "NO";
}
