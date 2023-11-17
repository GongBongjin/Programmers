#include <string>
#include <vector>

using namespace std;

int solution(string number)
{
    int answer = 0;
    int temp = 0;

    for (char c : number)
    {
        temp += c - '0';
    }

    answer = temp % 9;

    return answer;
}