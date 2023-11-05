#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr)
{
    vector<string> answer;

    int cnt = 0;
    int ascii = 'a' - 'A';

    for (string s : strArr)
    {
        string temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (cnt % 2 == 0)
            {
                if (s[i] <= 'Z')
                    temp.push_back(s[i] + ascii);
                else
                    temp.push_back(s[i]);
            }
            else
            {
                if (s[i] >= 'a')
                    temp.push_back(s[i] - ascii);
                else
                    temp.push_back(s[i]);
            }
        }
        answer.push_back(temp);
        temp.clear();
        cnt++;
    }

    return answer;
}