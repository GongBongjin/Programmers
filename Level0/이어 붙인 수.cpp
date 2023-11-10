#include <string>
#include <vector>
#include <cmath>

using namespace std;

int GetNum(vector<int> vec)
{
    int num = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        num = num + vec[i] * pow(10, vec.size() - 1 - i);
    }

    return num;
}

int solution(vector<int> num_list)
{
    int answer = 0;
    vector<int> a;
    vector<int> b;

    for (int i : num_list)
    {
        if (i % 2 == 0)
            a.push_back(i);
        else
            b.push_back(i);
    }

    answer = GetNum(a) + GetNum(b);

    return answer;
}