#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency)
{
    vector<int> answer;
    vector<int> vec(emergency);

    sort(vec.begin(), vec.end(), greater<>());

    for (int i = 0; i < emergency.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] == emergency[i])
                answer.push_back(j + 1);
        }
    }

    return answer;
}