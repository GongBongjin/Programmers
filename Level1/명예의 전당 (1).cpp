#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    vector<int> temp;
    for (int i : score)
    {
        temp.push_back(i);
        sort(temp.begin(), temp.end());
        if (temp.size() > k)
            temp.erase(temp.begin());

        answer.push_back(*temp.begin());
    }

    return answer;
}