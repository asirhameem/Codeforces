#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int len = word.length();
    int upper =0;
    int lower = 0;
    for(int n = 0; n < word.length(); n++)
    {
        if(word[n]  >= 'A' && word[n] <= 'Z')
        {
            upper++;
        }
        else if(word[n]  >= 'a' && word[n] <= 'z')
        {
            lower++;
        }
    }

    if( (islower(word[0])&&lower == 1)  || (upper == len && lower ==0) )
    {


        for (int i = 0; i < word.length(); i++)
        {
            if(islower(word[i]) && i == 0)
            {
                word[i] = toupper(word[i]);
            }
            else if(isupper(word[i]) )
            {
                word[i] = tolower(word[i]);
            }
        }

        cout << word;
    }
    else
    {
           cout << word;
    }



}
