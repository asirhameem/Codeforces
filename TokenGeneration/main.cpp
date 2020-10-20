
#include <iostream>
#include <string>


using namespace std;

int main()
{
    string line;
    cin >> line;

    string output = "";

    int attributeValue = 1;
    //int variableCount = 0;
    //int operatorCount = 0;
    //int separatorCount = 0;

    for(int i = 0; i < line.size(); i++)
    {
        if((line[i] >= 97 && line[i] <= 122) || (line[i] >= 65 && line[i] <= 90))
        {
            string first = "<";
            string last = ">";
            string comma = ",";

            string variable = "id";

            string av = to_string(attributeValue);

            string token = first + variable + comma + av + last; //","  attributeValue  ">";
            output = output + token;
            attributeValue++;
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
}
