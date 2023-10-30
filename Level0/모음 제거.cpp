#include <string>
#include <vector>

using namespace std;

string solution(string my_string)
{
    string answer = "";
    string moem = "aeiou";

    for (int i = 0; i < my_string.size(); i++)
    {
        bool isAnswer = true;

        for (int j = 0; j < moem.size(); j++)
        {
            if (my_string[i] != moem[j]) continue;
            isAnswer = false;
            break;
        }
        if (isAnswer)
            answer.push_back(my_string[i]);
    }

    return answer;
}