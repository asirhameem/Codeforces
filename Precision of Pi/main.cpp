#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{


    double pi = 3.1415;
    int width = 6;

    for(int j = 0; j < 6; j++)
    {

    cout << " ";

    for(int i = width-1; i >0; i--)
    {

        cout << setprecision(i) << pi <<endl;
    }



    }

}
