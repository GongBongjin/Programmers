#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share)
{
    int answer = 0;

    double tmp = 1;

    if (balls == share)
        answer = 1;
    else
    {
        for (int i = balls; i > share; i--)
            tmp *= i;

        for (int i = balls - share; i > 1; i--)
            tmp /= i;

        answer = (int)tmp;
    }

    return answer;
}