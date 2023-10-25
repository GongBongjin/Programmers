#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int cnt = s.size();

    if (cnt == 4 || cnt == 6)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] > '9')
                answer = false;
            else
                continue;
        }
    }
    else
        answer = false;

    return answer;
}