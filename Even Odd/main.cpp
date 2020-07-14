#include <iostream>


using namespace std;

int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;
    int arr[n];
    int couter = 0;
    int half;

    if(n % 2== 0)
    {
        half = n/2;
    }
    if(n % 2 != 0)
    {
        half = n/2+1;
    }


    int i = 1;
    while(i <= n)
    {
        if(i % 2 != 0)
        {
            arr[couter] = i;
            couter++;

            arr[half] = i+1;
            half++;
        }
        i++;
    }

    cout << arr[m-1] << endl;

}


