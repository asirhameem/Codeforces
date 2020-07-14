#include <iostream>
#include<string>
using namespace std;

int main()
{
    string lyric;
    cin >> lyric;

    string word = "WUB";
    string newLine= "";
    while(lyric.find(word))
    {
        int p = -1;
        string w = lyric.replace(p,lyric.length(),"");
        newLine = newLine+w;
    }

    cout << newLine;
}
