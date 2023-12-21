#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const vector<int>& a, const vector<int>& b)
{
    return a[0] < b[0];
}

int solution(vector<int> rank, vector<bool> attendance)
{
    vector<vector<int>> new_rank;
    for (int i = 0; i < rank.size(); ++i)
    {
        if (attendance[i])
            new_rank.emplace_back(vector<int>{rank[i], i});
    }
    sort(new_rank.begin(), new_rank.end(), cmp);
    return 10000 * new_rank[0][1] + 100 * new_rank[1][1] + new_rank[2][1];
}