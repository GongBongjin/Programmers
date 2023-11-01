#include <string>
#include <vector>

using namespace std;

int solution(string my_string)
{
    int answer = 0;

    int n = 0;

    for (int i = 0; i < my_string.size(); i++)
    {
        if (isdigit(my_string[i]))
            n = my_string[i] - '0' + n * 10;
        else
        {
            answer += n;
            n = 0;
        }
    }
    answer += n;

    return answer;
}