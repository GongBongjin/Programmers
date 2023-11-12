#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list)
{
    vector<int> answer;

    int lastNum = num_list[num_list.size() - 1];
    int cpNum = num_list[num_list.size() - 2];

    answer = num_list;

    if (lastNum > cpNum)
        answer.push_back(lastNum - cpNum);
    else
        answer.push_back(2 * lastNum);


    return answer;
}