#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n)
{
    int answer = 0;
    vector<pair<int, int>> vec;

    for (int i = 0; i < array.size(); i++)
    {
        vec.push_back(make_pair(abs(array[i] - n), array[i]));
    }

    sort(vec.begin(), vec.end());

    answer = vec[0].second;

    return answer;
}