#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string my_string)
{
    string answer = "";

    map<char, int> m;

    for (int i = 0; i < my_string.size(); i++)
    {
        m[my_string[i]]++;

        if (m[my_string[i]] > 1)
            m[my_string[i]]--;
        else
            answer += my_string[i];
    }


    return answer;
}