#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n)
{
    int answer = 0;

    if (n % 2 == 1)
    {
        for (int i = 1; i <= n; i += 2)
        {
            answer += i;
        }
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            answer += pow(i, 2);
        }
    }

    return answer;
}