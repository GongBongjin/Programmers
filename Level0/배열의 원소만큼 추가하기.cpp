#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++)
    {
        int cnt = arr[i];

        while (cnt > 0)
        {
            answer.push_back(arr[i]);
            cnt--;
        }
    }

    return answer;
}