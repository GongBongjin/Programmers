#include <string>
#include <vector>

using namespace std;

string solution(string myString)
{
    string answer = "";

    int ascii = 'a' - 'A';

    for (int i = 0; i < myString.size(); i++)
    {
        if (myString[i] > 'Z')
            answer.push_back(myString[i] - ascii);
        else
            answer.push_back(myString[i]);
    }

    return answer;
}