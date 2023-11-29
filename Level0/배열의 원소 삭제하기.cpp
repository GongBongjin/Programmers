#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list)
{
    vector<int> answer;

    for (int i : arr)
    {
        if (find(delete_list.begin(), delete_list.end(), i) == delete_list.end())
        {
            answer.push_back(i);
        }
    }

    return answer;
}