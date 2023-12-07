#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr)
{
    int cnt[31]{};

    for (const auto& s : strArr)
    {
        cnt[s.size()]++;
    }
    return *max_element(cnt, cnt + 31);
}