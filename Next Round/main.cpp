#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int par;
    int nex;

    int arr[100];





    cin >> par >> nex;

    for (int a = 0 ; a < par ; a++)
    {
        cin >> arr[a];
    }



    int counter = 0;
    int temp = nex ;
    int temp2 = nex -1;

    for(int c =0 ; c < par ; c++ )
    {
        if(arr[c] == 0)
        {
            break;
        }
        counter++;
        if( arr[c] == arr[ temp ] && c == temp2 )
        {
            temp =  temp + 1;
            temp2 = temp2 + 1;


        }
        else if( arr[c] != arr[ temp ] && c == temp2 )
        {
            break;

        }






    }
    cout << counter << endl;









    }
