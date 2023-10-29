#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2)
{
    int answer = 0;

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1.substr(i, str2.size()) == str2)
            return 1;

        if (i > str1.size() - str2.size())
            return 2;
    }
    return answer;
}