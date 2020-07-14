#include <iostream>

using namespace std;

int main()
{
    int cupboards;
    cin >> cupboards;
    int left;
    int right;
    int leftOpen = 0;
    int rightOpen = 0;
    int leftClose = 0;
    int rightClose = 0;
    for(int i = 0; i < cupboards; i++)
    {
            cin >> left;
            cin >> right;
            if(left == 1)
            {
                leftOpen++;
            }
            if(left == 0)
            {
                leftClose++;
            }
            if(right == 1)
            {
                rightOpen++;
            }
            if(right == 0)
            {
                rightClose++;
            }
    }

    int leftSec = 0;
    if(leftOpen > leftClose)
    {
        leftSec = leftClose;
    }
    else if( leftClose > leftOpen)
    {
        leftSec = leftOpen;
    }
    else if(leftOpen == leftClose)
    {
        leftSec = leftClose;
    }

    int rightSec = 0;
    if(rightOpen > rightClose)
    {
        rightSec = rightClose;
    }
    else if( rightClose > rightOpen)
    {
        rightSec = rightOpen;
    }
    else if(rightOpen == rightClose)
    {
        rightSec = rightClose;
    }


    cout << rightSec + leftSec << endl;
}
