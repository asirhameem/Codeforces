#include <iostream>

using namespace std;

int main()
{
    string num1;
    string num2;

    cin >> num1;
    cin >> num2;

    int len = num1.length();
    int c = 0;
    int arr[len];

    for(int i = 0; i <len; i++)
    {

        if( num1[i] == num2[i])
        {
            arr[c] = 0;
            c++;
        }
        else
        {
            arr[c] = 1;
            c++;
        }
    }

    for(int j = 0; j < len; j++)
    {
        cout << arr[j];
    }
}
