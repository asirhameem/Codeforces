#include <bits/stdc++.h>


using namespace std;

int main()
{
    string line;
    getline(cin, line);

    int sizeOfLine = line.size();
    string output = "";

    int attributeValue = 0;

    string word;
    string token[sizeOfLine];
    for(int i = 0; i <= sizeOfLine; i++)
    {

        if((line[i] >= 97 && line[i] <= 122) || (line[i] >= 65 && line[i] <= 90))
        {
            //string makeWord = "";
            while((line[i+1] >= 97 && line[i+1] <= 122) || (line[i+1] >= 65 && line[i+1] <= 90))
            {
                //makeWord += line[i];
                i++;
            }
            //word = makeWord;
            attributeValue++;

            string first = "<";
            string last = ">";
            string comma = ",";

            string variable = "id";

            string av = to_string(attributeValue);

            string token = first + variable + comma + av  + last;

            output = output + token;



        }
        else if(line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '=' || line[i] == '/')
        {
            //operatorCount++;
            string first = "<";
            string last = ">";
            string var = string(1,line[i]);
            string anothertoken = first + var + last; // ">";
            output = output + anothertoken;
        }




    }

    //cout << variableCount << endl;
    //cout << operatorCount << endl;

    cout << output << endl;
    cout << sizeOfLine << endl;
    cout << attributeValue << endl;

}
