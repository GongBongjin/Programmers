#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int tmp = 1;

    for (int i = 1; i <= 10; i++)
    {
        tmp *= i;

        if (tmp == n)
            answer = i;

        if (tmp > n)
        {
            answer = i - 1;
            break;
        }
    }
    //n==5
    //2!==2;
    //3!==6;

    return answer;
}