#include <string>
#include <vector>
#include <cmath>

using namespace std;

/*
������ ���� ���� n�� ����, n�� � ���� ���� x�� �������� �ƴ��� �Ǵ��Ϸ� �մϴ�.
n�� ���� ���� x�� �����̶�� x+1�� ������ �����ϰ�, 
n�� ���� ���� x�� ������ �ƴ϶�� -1�� �����ϴ� �Լ��� �ϼ��ϼ���.
*/

long long solution(long long n)
{
    long long answer = 0;

    if (sqrt(n) == (int)sqrt(n))
        answer = pow(sqrt(n) + 1, 2);
    else
        answer = -1;

    return answer;
}