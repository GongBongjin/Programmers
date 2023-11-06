#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string)
{
    vector<string> answer;

    string temp = "";

    for (char c : my_string)
    {
        if (temp.empty() && c == ' ') continue;
        else if (!temp.empty() && c == ' ')
        {
            answer.push_back(temp);
            temp = "";
        }
        else
            temp.push_back(c);
    }
    if (!temp.empty())
    {
        answer.push_back(temp);
        temp.clear();
    }

    return answer;
}