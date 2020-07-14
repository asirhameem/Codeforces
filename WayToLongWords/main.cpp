#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    int n;
    cin >> n;

    string arr[100];

    for(int i = 0; i < n; i++ )
    {
        cin >> word;
        arr[i] = word;
    }



    for(int a =0 ; a < n; a++)
    {
        string w;

        w = arr[a];
        int len = w.length();
        if(len > 10)
        {
            cout << w.substr(0,1) << len-2 << w.substr(len-1,len) << endl;

        }
        if(len <= 10)
        {
            cout << w << endl;
        }
    }




}
