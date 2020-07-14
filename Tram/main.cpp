#include <iostream>

using namespace std;

int main()
{
    int stops;
    cin >> stops;

    int enter = 0;
    int exit;
    int stay = 0;
    int maxx = 0;
    for(int i = 1; i <= stops; i++ )

    {

        cin >> exit;
        cin >> enter;
        stay = stay + enter - exit;
        if(stay > maxx )
        {
            maxx = stay;
        }
    }

    cout << maxx << endl;





}
