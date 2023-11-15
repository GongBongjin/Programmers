#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString)
{
    vector<int> answer;

    myString += 'x';
    string temp = "";

    for (int i = 0; i < myString.size(); i++)
    {
        if (myString[i] == 'x')
        {
            answer.push_back(temp.size());
            temp = "";
        }
        else
        {
            temp += myString[i];
        }
    }


    return answer;
}