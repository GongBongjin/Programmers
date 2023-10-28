#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k)
{
    int answer = 0;
    int cnt = 0;

    for (int i = 0; i < k; i++)
    {
        cnt += 2;

        if (cnt > numbers.size())
            cnt -= numbers.size();
    }

    answer = numbers[cnt - 2];
    return answer;
}