#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string word;
    cin >> word;

    if(isupper(word[0]))
    {
        cout<< word;
    }
    else if(islower(word[0]))
    {
        word[0] = word[0]-32;
        cout << word;
    }
}
