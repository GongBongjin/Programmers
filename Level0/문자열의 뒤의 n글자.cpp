#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n)
{
    string answer = "";

    int startNum = my_string.size() - n;

    for (int i = startNum; i < my_string.size(); i++)
        answer.push_back(my_string[i]);

    return answer;
}