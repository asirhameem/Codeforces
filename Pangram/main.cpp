#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string word;
    cin >> word;
    bool upper = false;
    bool lower = false;
    bool unique = true;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ; j ++)
        {
            if(word[j] == word[i])
            {
                unique = false;
            }
            if(isupper(word[j]))
            {
                upper = true;
            }
            if(islower(word[j]))
            {
                lower = true;
            }
        }

    }

    if( upper == true && lower == true && unique == true )
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" ;
}
