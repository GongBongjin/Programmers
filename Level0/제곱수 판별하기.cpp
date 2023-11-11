#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n)
{
    int answer = 0;

    answer = sqrt(n) - (float)sqrt(n) == 0 ? 1 : 2;

    return answer;
}