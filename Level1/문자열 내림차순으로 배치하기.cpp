#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s)
{
    string answer = "";

    sort(s.begin(), s.end(), greater<char>());

    for (int i = 0; i < s.size(); i++)
    {
        answer.push_back(s[i]);
    }

    return answer;
}