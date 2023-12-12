#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k)
{
    vector<int> answer;
    for (const auto& a : arr)
    {
        if (find(answer.begin(), answer.end(), a) == answer.end() && answer.size() < k)
            answer.emplace_back(a);
    }
    if (answer.size() < k)
        answer.insert(answer.end(), k - answer.size(), -1);

    return answer;
}