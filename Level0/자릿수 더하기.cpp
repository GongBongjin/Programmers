#include <string>
#include <vector>
//0 - 48, 9 - 57
#define ASCII_ZERO 48

using namespace std;

int solution(int n)
{
    int answer = 0;

    string num = to_string(n);

    for (int i = 0; i < num.size(); i++)
    {
        answer += (int)num[i] - ASCII_ZERO;
    }

    return answer;
}