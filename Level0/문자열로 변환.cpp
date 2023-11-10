#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(int n)
{
    string answer = "";

    int temp = 0;

    if (n == 10000)
    {
        answer.push_back(1 + '0');
        n = n % 10000;
    }

    for (int i = 3; i >= 0; i--)
    {
        int tenPow = pow(10, i);

        temp = n / tenPow;

        if (temp == 0 && answer.size() == 0)
            continue;

        answer.push_back(temp + '0');
        n = n % tenPow;
    }

    return answer;
}