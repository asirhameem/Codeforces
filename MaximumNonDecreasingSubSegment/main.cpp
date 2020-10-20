#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>> n;
    int arr[n];
    int another[n];
    int highest = 0;
    for(int j = 0; j<n; j++)
    {
        cin>> arr[j];
    }
    for(int l = 0; l < n; l++)
    {
        int cou = 0;
        for(int k =0; k <n; k++)
        {
            if(arr[l] >= arr[k])
            {
                cou++;
            }
        }
        if(highest < cou)
        {
            highest = cou;
        }

    }

    cout << highest << endl;

}
