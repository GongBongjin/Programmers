#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    int cnt = 1;
    int ascii = 'a' - 'A';

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            cnt = 1;
            answer.push_back(s[i]);
            continue;
        }
        else
        {
            if (cnt & 1)
            {
                if (s[i] <= 'Z')
                    answer.push_back(s[i]);
                else
                    answer.push_back(s[i] - ascii);
            }
            else
            {
                if (s[i] <= 'Z')
                    answer.push_back(s[i] + ascii);
                else
                    answer.push_back(s[i]);
            }

        }
        cnt++;
    }

    return answer;
}