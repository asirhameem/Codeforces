#include <iostream>

using namespace std;

int main()
{
    string identifier;
    cin >> identifier;

    int flag = 1;

    if(identifier[0] == '_' || (identifier[0] >= 97 && identifier[0] <= 122) || (identifier[0] >= 65 && identifier[0] <= 90))
    {
        while(flag < identifier.size())
        {
            if((identifier[flag] >= 97 && identifier[flag] <= 122) || (identifier[flag] >= 65 && identifier[flag] <= 90) || (identifier[flag] >= 48 && identifier[flag] <= 57) )
            {
                flag++;
            }
            else
            {
                cout << "Is not an identifier" << endl;
                break;
            }
        }
    }
    else{
        cout << "Is not an identifier" << endl;
    }

    if(flag == identifier.size())
    {
        cout << "Is an Identifier" << endl;
    }


}
