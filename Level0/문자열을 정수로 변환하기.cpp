#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string n_str)
{
    int answer = 0;

    for (int i = 0; i < n_str.size(); i++)
    {
        answer += (n_str[i] - '0') * pow(10, n_str.size() - 1 - i);
    }

    return answer;
}