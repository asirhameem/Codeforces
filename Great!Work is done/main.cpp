#include <iostream>



using namespace std;

int main()
{

    int day;

    int totalhours, mens;
    int hours;



    while(cin >> totalhours >> mens)
    {


    int work = 0;

    for(int n=1;n<=mens;n++)
    {
        cin>>hours;

        work = work + hours;

    }

    day = totalhours / work;

    if(totalhours<work && day <= 1)
    {
        cout << "Project will finish withing 1 day." <<endl;
    }
    else if(totalhours % work == 0 && day > 1)
    {
        cout<<"Project will finish within " << day << " days." << endl;
    }
    else
    {
        cout<<"Project will finish within "<< day+1 << " days." << endl;
    }





    }


}

