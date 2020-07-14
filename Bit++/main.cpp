#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0;
    int input ;
    cin >> input;

    string command;
    for(int i = 0; i< input; i++)
    {
        cin >> command;
        if (command == "x++" || command == "++x" ||command == "X++" || command == "++X")
        {
            x++;
        }
        if(command == "x--" || command == "--x" ||command =="X--" || command == "--X")
        {
            x--;
        }
    }


    cout<< x;
}
