#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer;

    if (num_list.size() >= 11)
        answer = 0;
    else
        answer = 1;

    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list.size() >= 11)
            answer += num_list[i];
        else
            answer *= num_list[i];
    }


    return answer;
}