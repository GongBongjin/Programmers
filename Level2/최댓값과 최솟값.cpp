#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
* 문자열 s에는 공백으로 구분된 숫자들이 저장되어 있습니다. 
str에 나타나는 숫자 중 최소값과 최대값을 찾아 이를 "(최소값) (최대값)"형태의 문자열을 반환하는 함수, solution을 완성하세요.
예를들어 s가 "1 2 3 4"라면 "1 4"를 리턴하고, "-1 -2 -3 -4"라면 "-4 -1"을 리턴하면 됩니다.
*/

string solution(string s)
{
    string answer = "";

    string tmp = "";

    vector<int> v;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            v.push_back(stoi(tmp));
            tmp = "";

        }
        else
            tmp += s[i];
    }

    if (tmp != "")
        v.push_back(stoi(tmp));

    sort(v.begin(), v.end());

    answer += to_string(v[0]) + ' ';
    answer += to_string(v[v.size() - 1]);

    return answer;
}