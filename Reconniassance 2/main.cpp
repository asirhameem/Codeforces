#include <iostream>

using namespace std;

int main()
{
    int soldiers;
    cin >> soldiers;

    int height[soldiers];

    int minHeight = 0;
    int firstIndex = 0, secondIndex;
    int difference = 0;

    for(int i = 0; i < soldiers; i++)
    {
        cin >> height[i];


        if(i == 0 || height[i] < minHeight )
        {
            minHeight = height[i];
        }

    }

    cout << minHeight << difference<< endl;
    cout << firstIndex << endl;

}
