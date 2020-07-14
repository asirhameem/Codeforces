#include <iostream>

using namespace std;

int main()
{
    int bdruns = 0, pakruns = 0;

    //cout << "enter the number of test matches:" << endl;
    int testmatch;
    cin >> testmatch;
    for(int i=0;i<testmatch;i++)
    {
            int bdinnings1, bdinnings2;
            int pakinnigs1, pakinnigs2;

            for(int in = 0; in<2; in++)
            {
            //int brun, int prun;

            cin >> bdinnings1 >> bdinnings2 >> pakinnigs1 >> pakinnigs2;
            //brun = bdinnings1+bdinnings2;



            }

            bdruns = bdinnings1+bdinnings2;

            pakruns =pakinnigs1 + pakinnigs2;

            if(bdruns > pakruns)
            {
                cout << "Banglawash" << endl;
            }
            else if(bdruns <= pakruns)
            {
            cout << "Miss" <<endl;
            }
            else
            {
                cout << "Miss" << endl;
            }
    }


}
