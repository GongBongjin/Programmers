#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction)
{
    vector<int> answer;

    int sizeNum = numbers.size();

    answer.resize(sizeNum);

    for (int i = 0; i < sizeNum; i++)
    {
        if (direction == "right")
        {
            if (i == 0)
                answer[i] = numbers[sizeNum - 1];
            else
                answer[i] = numbers[i - 1];
        }

        if (direction == "left")
        {
            if (i == sizeNum - 1)
                answer[i] = numbers[0];
            else
                answer[i] = numbers[i + 1];
        }
    }

    return answer;
}