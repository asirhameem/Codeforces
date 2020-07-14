#include <iostream>
#include <string>

using namespace std;

int main()
{
    string c;

    cin >> c;
    int l = c.length();

    for(int i = 0; i < l; i++)
    {
        if(c.at(i) == "a")
        {
            c.erase(i,i);
            //return c;
        }


    }
*/

    cout<< c.at(1) ;

}
