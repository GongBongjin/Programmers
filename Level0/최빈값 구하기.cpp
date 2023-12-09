#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<int> array)
{
    int answer = 0;
    int maxCnt = 0;
    map<int, int> m;

    for (int i : array)
    {
        m[i]++;
    }

    for (pair<int, int> num : m)
    {
        if (num.second > maxCnt)
        {
            maxCnt = num.second;
            answer = num.first;
        }
        else if (num.second == maxCnt)
        {
            answer = -1;
        }
    }


    return answer;
}