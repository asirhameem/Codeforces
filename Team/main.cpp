#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int dis;

    int no= 0;
    int yes = 0;
    int proceed = 0;

    int arr[100];
    for(int i = 0; i< n; i++)
    {
        for(int a= 0; a < 3; a++)
        {
            cin>> dis;

            if(dis == 0 )
            {
                no++;
            }
            if( dis == 1)
            {
                yes++;
            }
        }
        if(yes > no)
        {
            proceed++;
        }
        yes = 0;
        no = 0;
    }
    cout<< proceed <<endl;
}
