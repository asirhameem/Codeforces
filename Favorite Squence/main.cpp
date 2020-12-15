#include <iostream>

using namespace std;

int main()
{

    int totalTest;
    cin >> totalTest;
    for(int n = 0; n < totalTest; n++)
    {
        int testcase;
        cin >> testcase;

        int seq[testcase];
        int favSeq[testcase];
        int first = 1;
        int last = testcase;
        for(int i = 1; i <= testcase; i++)
        {

            cin >> seq[i];

        }

        for(int j = 1; j <= testcase; j++)
        {
            if(j%2 != 0)
            {
                favSeq[j] = seq[first];
                first++;
            }
            else if(j%2 == 0)
            {
                favSeq[j] = seq[last];
                last--;
            }
        }
        for(int k = 1; k <= testcase; k++)
        {
            cout << favSeq[k] << " ";
        }

        cout << endl;


    }

}
