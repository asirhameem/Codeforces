#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userName;

    cin >> userName;

    char arr[100];

    int len = userName.length();

    for(int k = 0; k< len ; k++)
    {
        arr[k] = userName[k];
    }


    for(int i = 0; i< len; i++)
    {
        int counter =0;

        for (int k = 0; k < len ; k++ )
        {
            if(userName[i] == arr[k]  && i < k)
            {
                arr[k] = '0';
            }
        }

    }
    char arr2[100];
    int counter = 0;
    for(int n = 0; n< len ; n++)
    {
       if(arr[n] != '0')
       {
           arr2[counter] = arr[n];
           counter++;
       }
    }

    string yes = "CHAT WITH HER!";
    string no = "IGNORE HIM!";

    if(counter % 2 == 0)
    {
        cout << yes << endl;
    }
    else
        cout << no << endl;


}
