#include <iostream>

using namespace std;

int main()
{
    int solNum;
    cin >> solNum;

    int heights[solNum];

    int maxH = 0;

    int minH = 0;

    int maxStep = 0;
    int minStep = 0;

    for (int i = 0; i < solNum; i++)
    {
        int a;
        cin >> a;
        heights[i] = a;
        if(minH == 0 || maxH == 0)
        {
            maxH = a;
            minH = a;
        }

        if(a >= maxH)
        {
            maxH = a;
            maxStep = i;
        }

        if(a <= minH)
        {
            minH = a;
            minStep = i;
        }
    }
    int secCount = 0;
    for (int j = maxStep; j = 0; j--)
    {
        int temp = heights[j];
        heights[j] = heights[j-1];
        heights[j - 1] = temp;
        secCount++;
    }
    for(int k = minStep ; k <solNum; ++k)
    {
        int minTemp = heights[k];
        heights[k] = heights[k+1];
        heights[k+1] = minTemp;
        secCount++;
    }






    //int totalStep = (maxStep+(solNum - minStep-1) ) -1;
    // cout << minStep << endl;

    //cout << totalStep << endl;
    cout << secCount << endl;


}
