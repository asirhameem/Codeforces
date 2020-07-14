#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int count =0;
    int store[num];
    for(int i = 0; i < num; i++)
    {
        int poles;
        cin >> poles;
        store[i] = poles;

        if(store[i-1] != poles)
        {
            count++;
        }

    }

    cout << count << endl;
}
