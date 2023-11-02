#include <string>
#include <vector>
#include <cmath>

using namespace std;

int function(int n)
{
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    return cnt;
}

int solution(int n)
{
    int answer = 0;
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (function(i) >= 3)
            answer++;
    }

    return answer;
}