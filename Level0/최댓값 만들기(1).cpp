#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers)
{
    int answer = 0;

    sort(numbers.rbegin(), numbers.rend());

    answer = numbers[0] * numbers[1];

    return answer;
}