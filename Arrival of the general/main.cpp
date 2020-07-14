#include <iostream>

using namespace std;

int main()
{
    int solNum;
    cin >> solNum;
    int heights[solNum];
    int maxH = 0;
    int maxStep ;
    int minStep = 0;
    int minH = 0;
    for (int i = 0; i < solNum; i++)
    {
        int a;
        cin >> a;
        heights[i] = a;
        if(i == 0 || maxH == 0 || minH == 0)
        {
            maxH = a;
            minH = a;
        }
        else if(a > maxH || a == maxH)
        {
            maxH = a;
            maxStep = i;
        }
        else if(a < minH || a == minH)
        {
            minH = a;
            minStep = i;
    }
        }
    int secCount = 0;
    /*for (int j = maxStep+1; j >= 0; j--)
    {
        int temp = heights[j];
        heights[j] = heights[j-1];
        heights[j - 1] = temp;
        secCount++;
    }
    for(int k = minStep ; k <=solNum -1; k++)
    {
        int minTemp = heights[k];
        heights[k] = heights[k+1];
        heights[k+1] = minTemp;
        secCount++;
    }*/


    cout << maxStep << endl;

    cout << minStep << endl;


}
