#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;

    for (int i = 1; i <= 6; i++)
    {
        if ((i * n) % 6 == 0)
        {
            answer = (i * n) / 6;
            break;
        }
    }


    return answer;
}