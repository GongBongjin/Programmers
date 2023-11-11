#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;

    int plus = 0;
    int multi = 1;

    for (int i = 0; i < num_list.size(); i++)
    {
        plus += num_list[i];
        multi *= num_list[i];
    }

    plus = pow(plus, 2);

    if (multi < plus)
        answer = 1;
    else
        answer = 0;

    return answer;
}