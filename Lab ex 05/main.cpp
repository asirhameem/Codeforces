#include <iostream>

using namespace std;

int main()
{
    string line;
    cin >> line;

    string rev;
    for(int i = line.size()-1; i >= 0; i--)
    {
        rev = rev + line[i];
    }

    if(line == rev)
    {
        cout << "The string is pallingdrome" << endl;
    }
    else{
        cout << "Is not Pallindrome" << endl;
    }


}
