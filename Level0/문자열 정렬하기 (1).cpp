#include <string>
#include <vector>
#include <algorithm>

#define ASCIIZERO 48

using namespace std;

vector<int> solution(string my_string)
{
    vector<int> answer;

    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] >= ASCIIZERO && my_string[i] <= ASCIIZERO + 9)
            answer.push_back(my_string[i] - ASCIIZERO);
    }

    sort(answer.begin(), answer.end());
    return answer;
}