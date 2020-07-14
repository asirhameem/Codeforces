#include <iostream>
#include <string>

using namespace std;

int main()
{
    int len;
    cin >> len;

    int time;
    cin >> time;

    char line[100];
    for(int k = 0; k< len; k++)
    {
        char word;
        cin >> word;
        line[k] = word;
    }


    char temp;
    for(int i = 1; i <= time; i++)
    {
        for(int j = 0; j< len; j++)
        {
            if(line[j] == 'B'  && j != len-1)
            {
                temp = line[j];
                line[j] = line[j+1];
                line[j+1] = temp;
                continue;
            }
        }
    }

    for(int m = 0; m < len; m++)
    {


    cout << line[m] ;
    }


}
