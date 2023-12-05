#include <string>
#include <vector>

using namespace std;

int solution(string my_string)
{
    int answer = 0;
    string tmp = "";
    vector<bool> isPlus;
    vector<int> num;
    for (int i = 0; i < my_string.length(); i++)
    {
        if (my_string[i] - '0' >= 0 && my_string[i] - '0' <= 9)
            tmp += my_string[i];
        else if (my_string[i] == '+')
            isPlus.push_back(true);
        else if (my_string[i] == '-')
            isPlus.push_back(false);
        else if (tmp != "" && my_string[i] == ' ')
        {
            num.push_back(stoi(tmp));
            tmp = "";
        }
    }
    num.push_back(stoi(tmp));
    answer = num[0];
    for (int i = 0; i < isPlus.size(); i++)
    {
        if (isPlus[i]) answer += num[i + 1];
        else answer -= num[i + 1];
    }

    return answer;
}