#include <iostream>

#include <list>

#include <iterator>

#include<algorithm>



using namespace std;

int sz;

char graph[1000][1000];



//char graph[9][9] =

//{

//   {'-','e','-','e','-','-','-','e','-'},

//    {'-','-','a','-','-','-','-','-','-'},

//    {'-','-','-','-','-','-','-','-','-'},

//    {'-','-','-','-','a','-','-','-','-'},

//    {'-','-','-','-','-','b','-','-','-'},

//    {'-','-','-','-','-','-','b','-','-'},

//    {'-','-','-','-','-','-','-','-','-'},

//    {'-','-','-','-','-','-','-','a','b'},

//    {'-','-','-','-','-','-','-','-','b'},

//};





list<int> e_closer(int n)

{

    list<int> g;

    list <int> :: iterator it;



    g.push_back(n);

    for(it = g.begin(); it != g.end(); ++it)

    {

        for(int j=0; j<sz; j++)

        {

            if(graph[*it][j]=='e')

            {

                bool found = (std::find(g.begin(), g.end(),j ) != g.end());

                if (!found)

                {

                    g.push_back(j);

                }

            }

        }

    }





    return g;

}









list<int> Move(list<int> g,char s)

{

    list<int> h;

    list <int> :: iterator it;

    for(it = g.begin(); it != g.end(); ++it)

    {

        for (int i=0; i<sz; i++)

        {

            if (graph[*it][i]==s)

            {

                bool found = (std::find(h.begin(), h.end(),i ) != h.end());

                if (!found)

                {

                    h.push_back(i);

                }

            }

        }

    }





    return h;

}







void printList(list<int> g)

{

    list <int> :: iterator it;

    for(it = g.begin(); it != g.end(); ++it)

    {

        cout << ' ' << *it;

    }

    cout<<endl;

}









int main()

{

    cout<<"enter graph size:";

    cin>>sz;

    for (int i=0;i<sz;i++)

    {

        for (int j=0;j<sz;j++)

        {

            cout<<"enter "<<i<<" connection with "<<j<<":";

            cin>>graph[i][j];

        }

    }



    cout<<' ';

    for(int i=0; i<sz; i++)

    {

        cout<<' '<<i;

    }

    cout<<endl<<' ';

    for(int i=0; i<sz; i++)

    {

        cout<<"__";

    }

    cout<<endl;

    for(int i=0; i<sz; i++)

    {

        cout<<i<<'|';

        for (int j=0; j<sz; j++)

        {

            cout<<graph[i][j]<<' ';

        }

        cout<<endl;

    }

    cout << '\n';

    cout << '\n';

    cout << '\n';



    for (int i=0; i<sz; i++)

    {

        cout<<"E("<<i<<")=";

        list<int> g=e_closer(i);

        list <int> :: iterator it;

        for(it = g.begin(); it != g.end(); ++it)

        {

            cout << ' ' << *it;

        }

        cout<<endl;

        cout<<i<<": move(a):";

        list<int> temp=Move(g,'a');

        for(it = temp.begin(); it != temp.end(); ++it)

        {

            cout << ' ' << *it;

        }

        cout<<endl;



        cout<<i<<": move(b):";

        temp=Move(g,'b');

        for(it = temp.begin(); it != temp.end(); ++it)

        {

            cout << ' ' << *it;

        }

        cout<<endl;

    }







    return 0;

}

