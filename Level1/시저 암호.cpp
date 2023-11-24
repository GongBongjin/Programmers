#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                answer += (s[i] - 'a' + n) % 26 + 'a';
            else
                answer += (s[i] - 'A' + n) % 26 + 'A';
        }
        else
            answer += ' ';
    }

    return answer;
}