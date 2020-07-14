#include <iostream>

using namespace std;

int main()
{
    int elements;
    cin >> elements;
    int arr[elements];

    for (int i = 0; i < elements; i++)
    {
        cin >> arr[i];
    }

    int queries;
    cin >> queries;


    int first = 0;
    int last = 0;
    int check;
    for(int n = 0; n < queries; n++)
    {

        cin >>  check;
        for(int m = 0; m < elements; m++)
        {
            if( check != arr[m])
            {
                first++;
                continue;
            }
            else if(check == arr[m])
            {
                first++;
                break;
            }
        }

        for(int k = elements -1 ; k >=0; --k)
        {
            if(check != arr[k])
            {
                last++;
                continue;
            }
            else if(check == arr[k])
            {
                last++;
                break;
            }
        }
    }
    cout << first << " " <<  last << endl;

}
