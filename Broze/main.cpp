#include <iostream>
#include <string>
using namespace std;

int main()
{
    string code;
    cin >> code;

    int len = code.length();
    int counter = 0;
    string words = "";

    for(int i = 0; i < len; i++)
    {
        if(code[i] == '.' )
        {
            words = words + "0";
        }
        else if(code[i] == '-' && code[i+1] == '.' )
        {
            words = words + "1";
            i++;
        }
        else if(code[i] == '-' && code[i+1] == '-' && code[i+1] != '.' )
        {
            words = words + "2";
            i++;
        }
    }
    cout << words;


}
