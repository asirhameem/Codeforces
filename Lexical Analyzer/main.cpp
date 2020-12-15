#include <iostream>

using namespace std;

void TokenGenerate(string line)
{

    //string line;
    //getline(cin, line);

    int sizeOfLine = line.size();
    string output = "";

    int attributeValue = 0;

    string word;
    string token[sizeOfLine];
    for(int i = 0; i <= sizeOfLine; i++)
    {

        if((line[i] >= 97 && line[i] <= 122) || (line[i] >= 65 && line[i] <= 90))
        {
            while((line[i+1] >= 97 && line[i+1] <= 122) || (line[i+1] >= 65 && line[i+1] <= 90))
            {

                i++;
            }
            attributeValue++;

            string first = "<";
            string last = ">";
            string comma = ",";

            string variable = "id";

            //string av = to_string(attributeValue);  + av

            string token = first + variable + comma  + last;

            output = output + token;



        }
        else if(line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '=' || line[i] == '/')
        {

            string first = "<";
            string last = ">";
            string var = string(1,line[i]);
            string anothertoken = first + var + last;
            output = output + anothertoken;
        }




    }

    cout << output << endl;


}

void CheckIdentifier(string identifier)
{
    //string identifier;
    //cin >> identifier;

    int flag = 1;

    if(identifier[0] == '_' || (identifier[0] >= 97 && identifier[0] <= 122) || (identifier[0] >= 65 && identifier[0] <= 90))
    {
        while(flag < identifier.size())
        {
            if((identifier[flag] >= 97 && identifier[flag] <= 122) || (identifier[flag] >= 65 && identifier[flag] <= 90) || (identifier[flag] >= 48 && identifier[flag] <= 57) )
            {
                flag++;
            }
            else
            {
                cout << "not an identifier" << endl;
                break;
            }
        }
    }
    else{
        cout << "not an identifier" << endl;
    }

    cout << identifier ;
    if(flag == identifier.size())
    {
        cout << "  Identifier " ;
    }
}

void CheckType(string word)
{
    string arr[15] = {"int","float","double","long","static","const","string","if","else","for","while","do","default","signed","unsigned"};
    for(int i = 0; i < 15; i++)
    {
        if(arr[i] == word)
        {
            cout << arr[i] << endl;
        }

    }


}

int main()
{
    string line;
    getline(cin,line);

    string arr[15] = {"int","float","double","long","static","const","string","if","else","for","while","do","default","signed","unsigned"};

    string type = "";
    for(int j= 0; j < line.size(); j++)
    {
        if((line[j] >= 97 && line[j] <= 122) || (line[j] >= 65 && line[j] <= 90))
        {
            string makeWord = "";
            int chk = 0;
            while((line[j] >= 97 && line[j] <= 122) || (line[j] >= 65 && line[j] <= 90))
            {
                makeWord += line[j];
                j++;
            }
            //CheckIdentifier(makeWord);
            //CheckType(makeWord);
            for(int k = 0; k < 15; k++)
            {
                if(makeWord == arr[k])
                {
                    type = makeWord;
                    chk = 1;

                }
                else{
                    type = "undefined";
                    chk = 0;
                }
            }

            if(chk == 0)
            {
                CheckIdentifier(makeWord);
            }

            cout << type << endl;
        }

    }
    TokenGenerate(line);
}
