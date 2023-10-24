#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";

    int cnt = s.size();


    if (cnt & 1)
        answer.push_back(s[cnt / 2]);
    else
    {
        answer.push_back(s[cnt / 2 - 1]);
        answer.push_back(s[cnt / 2]);
    }


    return answer;
}