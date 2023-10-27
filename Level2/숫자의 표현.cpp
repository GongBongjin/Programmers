#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;

    int start = 1;

    while (start != n)
    {
        int sum = 0;

        for (int i = start; sum < n; i++)
        {
            sum += i;
        }

        if (sum == n)
            answer++;

        start++;
    }

    return answer + 1;
}