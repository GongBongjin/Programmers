#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
    int a, b = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        if (i % 2 == 0)
        {
            a += num_list[i];
        }
        else
        {
            b += num_list[i];
        }
    }

    answer = a > b ? a : b;

    return answer;
}