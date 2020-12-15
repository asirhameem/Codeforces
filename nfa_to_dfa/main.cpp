#include <iostream>
#include <string>

using namespace std;


void Move(string g[],char s)

{
    string newArray[10];
    for(int it = 0; it <=  sizeof(g); it++)

    {

        for (int i=0; i<sizeof(g); i++)

        {

            if (g[*it][i]==s)

            {
                newArray [i] = s;

            }

        }

    }

}


int main()
{
    cout<< "Enter Number of states" << endl;
    int states;
    cin >> states;
    string nfa[states][states];
    int stateCounter = 0;
    string changeState[3];

    for(int row = 0; row < states; row++)
    {
        for(int col = 0; col < states; col++)
        {
            cin >> nfa[row][col];

            if(nfa[row][col] == "0" || nfa[row][col] == changeState[0] || nfa[row][col] == changeState[1] || nfa[row][col] == changeState[2])
            {
                continue;
            }else{

                changeState[stateCounter] = nfa[row][col];
                stateCounter++;
            }
        }
    }

    /*
    for(int i = 0; i < 3; i++)
    {
        cout << changeState[i] + " ";
    }
    */
    /* Output Showing For the Input NFA
    for(int outRow = 0; outRow < states; outRow++)
    {
        for(int outCol = 0; outCol < states; outCol++)
        {
            cout << nfa[outRow][outCol] << " ";
        }
        cout <<""<<endl;
    }
    */
    string epClosure = "";
        for(int rowCheck = 0; rowCheck < states ; rowCheck++)
        {
            for(int colCheck = 0; colCheck < states; colCheck++)
            {
                if(nfa[rowCheck][colCheck] == "e")
                {
                    for(int agRow = rowCheck; agRow < states; agRow++)
                    {
                        for(int agCol = colCheck; colCheck < states; agCol++)
                        {
                            if(nfa[agRow][agCol] == "e")
                            {
                                string agrowSt = to_string(agRow);
                                string agcolSt = to_string(agCol);
                                string rowSt = to_string(rowCheck);
                                string colSt = to_string(colCheck);
                                epClosure = epClosure + rowSt + colSt + agrowSt + agcolSt + " ";
                            }
                        }
                    }

                }
            }
        }
    cout << "epsilon closure of e:"epClosure << endl;

    string epClosureA = "";
        for(int rowCheck = 0; rowCheck < states ; rowCheck++)
        {
            for(int colCheck = 0; colCheck < states; colCheck++)
            {
                if(nfa[rowCheck][colCheck] == "a")
                {
                    for(int agRow = rowCheck; agRow < states; agRow++)
                    {
                        for(int agCol = colCheck; colCheck < states; agCol++)
                        {
                            if(nfa[agRow][agCol] == "a")
                            {
                                string agrowSt = to_string(agRow);
                                string agcolSt = to_string(agCol);
                                string rowSt = to_string(rowCheck);
                                string colSt = to_string(colCheck);
                                epClosureA = epClosureA + rowSt + colSt + agrowSt + agcolSt + " ";
                            }
                        }
                    }

                }
            }
        }
    cout << "epsilon closure of A:" + epClosureA << endl;


    string epClosureB = "";
        for(int rowCheck = 0; rowCheck < states ; rowCheck++)
        {
            for(int colCheck = 0; colCheck < states; colCheck++)
            {
                if(nfa[rowCheck][colCheck] == "a")
                {
                    for(int agRow = rowCheck; agRow < states; agRow++)
                    {
                        for(int agCol = colCheck; colCheck < states; agCol++)
                        {
                            if(nfa[agRow][agCol] == "a")
                            {
                                string agrowSt = to_string(agRow);
                                string agcolSt = to_string(agCol);
                                string rowSt = to_string(rowCheck);
                                string colSt = to_string(colCheck);
                                epClosureB = epClosureB + rowSt + colSt + agrowSt + agcolSt + " ";
                            }
                        }
                    }

                }
            }
        }
    cout << "epsilon closure of B:" + epClosureB << endl;


















}
