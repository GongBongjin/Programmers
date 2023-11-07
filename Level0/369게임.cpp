#include <string>
#include <vector>

using namespace std;

int solution(int order)
{
    int answer = 0;

    string a = to_string(order);

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 3 == 0)
        {
            if (a[i] != '0')
                answer++;
            else
                answer += 0;
        }

    }

    return answer;
}