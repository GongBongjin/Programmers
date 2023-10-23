#include <string>
#include <vector>

using namespace std;

/*
���� ���� x�� �ϻ��� ���̷��� x�� �ڸ����� ������ x�� ���������� �մϴ�. 
���� ��� 18�� �ڸ��� ���� 1+8=9�̰�, 18�� 9�� ������ �������Ƿ� 18�� �ϻ��� ���Դϴ�. 
�ڿ��� x�� �Է¹޾� x�� �ϻ��� ������ �ƴ��� �˻��ϴ� �Լ�, solution�� �ϼ����ּ���.
*/

bool solution(int x)
{
    bool answer = true;

    int tmp = x;
    int hNum = 0;

    while (x > 0)
    {
        hNum += x % 10;
        x = x / 10;
    }

    if (tmp % hNum == 0)
        answer = true;
    else
        answer = false;

    return answer;
}