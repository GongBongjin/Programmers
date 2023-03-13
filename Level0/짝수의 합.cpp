#include <string>
#include <vector>

using namespace std;
//정수 n이 주어질 때, n이하의 짝수를 모두 더한 값을 return 하도록 solution 함수를 작성해주세요.
int solution(int n) 
{
    int a = n / 2;
    int b = 0;

    for (int i = 1; i <= a; i++)
    {
        b += 2 * i;
    }
    return b;
}