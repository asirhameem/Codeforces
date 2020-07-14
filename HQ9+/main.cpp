#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int len = input.length();
    bool found = false;
    for(int i = 0; i < len; i++)
    {
        if(input[i] == 'H' || input[i] == 'Q' ||input[i] == '9' || input[i] == '++')
        {
            found = true;
        }
    }
    if(found == true)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


}
