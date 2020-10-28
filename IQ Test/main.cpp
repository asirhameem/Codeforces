#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;

    int arr[test];

    int counter = 0;
    int even = 0;
    int evenCounter = 0;
    int odd = 0;
    int oddCounter = 0;

    for(int i = 0; i < test; i++)
    {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
        {
            counter++;
            even = counter;
            evenCounter++;
        }
        else if(arr[i] % 2 != 0)
        {
            counter++;
            odd = counter;
            oddCounter++;
        }

    }
    if(evenCounter == 1)
    {
        cout << even << endl;
    }
    else if(oddCounter == 1)
    {
        cout << odd << endl;
    }
}
