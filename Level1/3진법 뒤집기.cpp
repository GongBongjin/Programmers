#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int mul = 1;
    vector<int> three;

    while (n)
    {
        three.push_back(n % 3);
        n /= 3;
    }

    for (int i = three.size() - 1; i >= 0; i--)
    {
        answer += three[i] * mul;
        mul *= 3;
    }

    return answer;
}