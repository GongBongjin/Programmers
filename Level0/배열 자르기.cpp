#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2)
{
    vector<int> answer;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (i >= num1 && i <= num2)
        {
            answer.push_back(numbers[i]);
        }
    }

    return answer;
}