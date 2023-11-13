#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;

    if (a % 2 == 1)
    {
        if (b % 2 == 1)
        {
            answer = pow(a, 2) + pow(b, 2);
        }
        else
        {
            answer = 2 * (a + b);
        }
    }
    else
    {
        if (b % 2 == 1)
        {
            answer = 2 * (a + b);
        }
        else
        {
            answer = abs(a - b);
        }
    }

    return answer;
}