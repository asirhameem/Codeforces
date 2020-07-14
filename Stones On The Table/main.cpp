#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int l;
    cin >> l;

    cin >> word;

    int len = word.length();
    if(l == len)
    {


    int counter = 0;
    for(int i = 0; i < len; i++)
    {
        if(word[i] == word[i+1])
        {
            counter++;
        }

    }
    cout<< counter;

    }


}
