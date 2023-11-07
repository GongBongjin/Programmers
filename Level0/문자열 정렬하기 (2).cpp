#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string)
{
    string answer = "";

    int gap = 'z' - 'Z';

    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] <= 'Z')
            answer.push_back(my_string[i] + gap);
        else
            answer.push_back(my_string[i]);
    }

    sort(answer.begin(), answer.end());

    return answer;
}