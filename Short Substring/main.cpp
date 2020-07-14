#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    string lengthyStr;


    string arr[testCase];
    int i = 0;
    while (i < testCase)
    {
        cin >> lengthyStr;
        int len = lengthyStr.length();
        string newFull = "";
        for(int j = 0; j< len-1; j=j+2)
        {
            string sub = lengthyStr.substr(j,2);


            if(j == len-2)
            {
                newFull = newFull + sub;
            }
            else
                newFull = newFull + sub[0];
        }
        arr[i]  = newFull;
        i++;


    }

    for(int k = 0; k<testCase; k++)
    {
        cout << arr[k] << endl;
    }
}
