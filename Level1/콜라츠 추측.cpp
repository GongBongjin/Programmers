#include <string>
#include <vector>

using namespace std;

int solution(int num)
{
    int answer = 0;
    int count = 0;
    long long tmpNum = num;

    while (tmpNum > 1)
    {
        if (count == 500) break;
        if (tmpNum < 0) return -1;

        if (!(tmpNum & 1))
        {
            tmpNum = tmpNum >> 1;
        }
        else
        {
            tmpNum = (tmpNum * 3) + 1;
        }
        count++;
    }

    if (count == 500) return -1;

    return count;
}