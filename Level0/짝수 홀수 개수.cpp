#include <string>
#include <vector>

using namespace std;
//정수가 담긴 리스트 num_list가 주어질 때,
//num_list의 원소 중 짝수와 홀수의 개수를 담은 배열을 return 하도록 solution 함수를 완성해보세요.
vector<int> solution(vector<int> num_list)
{
    int result1 = 0, result2 = 0;

    vector<int> result = { result1, result2 };

    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
        {
            result[0]++;
        }
        else
        {
            result[1]++;
        }

    }

    return result;
}