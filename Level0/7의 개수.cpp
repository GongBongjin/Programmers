#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array)
{
    int answer = 0;

    for (int i = 0; i < array.size(); i++)
    {
        int tmp = array[i];

        while (tmp > 1)
        {
            if (tmp % 10 == 7)
            {
                answer++;
                tmp /= 10;
            }
            else
                tmp /= 10;
        }
    }
    return answer;
}