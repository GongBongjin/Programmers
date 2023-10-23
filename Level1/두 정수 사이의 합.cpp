#include <string>
#include <vector>

using namespace std;

/*
* �� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.
*/

long long solution(int a, int b)
{
    long long answer = 0;

    if (a == b)
        answer = a;
    else if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            answer += i;
        }
    }
    else
    {
        for (int i = b; i <= a; i++)
        {
            answer += i;
        }
    }

    return answer;
}