#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string)
{
    vector<string> answer;

    my_string.push_back(' ');

    string s = "";

    for (char c : my_string)
    {
        if (c == ' ')
        {
            answer.push_back(s);
            s = "";
        }
        else
        {
            s.push_back(c);
        }
    }

    return answer;
}