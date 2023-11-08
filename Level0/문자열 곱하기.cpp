#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k)
{
    string answer = "";

    for (int tmp = 0; tmp < k; tmp++)
    {
        for (int i = 0; i < my_string.size(); i++)
        {
            answer.push_back(my_string[i]);
        }
    }

    return answer;
}