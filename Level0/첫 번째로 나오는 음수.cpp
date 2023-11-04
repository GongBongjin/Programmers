#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] < 0)
        {
            answer = i;
            break;
        }

        if (i == num_list.size() - 1)
            answer = -1;
    }

    return answer;
}