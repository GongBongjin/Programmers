#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;

    int tmp = n;
    int cnt = 0;

    for (int i = 2; i * i <= n; i++)
    {
        cnt = 0;
        while (tmp % i == 0)
        {
            if (cnt == 0)
            {
                answer.push_back(i);
            }
            tmp = tmp / i;
            cnt++;
        }
    }
    if (tmp != 1)
        answer.push_back(tmp);

    return answer;
}