#include <string>
#include <vector>

using namespace std;

string solution(string myString)
{
    string answer = "";

    for (char c : myString)
    {
        if (c < 'l')
            answer.push_back('l');
        else
            answer.push_back(c);
    }

    return answer;
}