#include <iostream>
#include <string>
using namespace std;

int main()
{
    int year;
    cin >> year;
    int ans = 0;
        int array[4];
        int number = year + 1;
        for (int i = 3; i >= 0; i--)
            {

            array[i] = number % 10;
            number /= 10;


            }


    for (int j= 0; j< 4; j++)
    {
        int n;
        for (n = 1; n < 4; n++)

            if(array[n] == array[j])
            {
                ans++;
            }



    }
    cout << ans << endl;
}
