#include <string>
#include <vector>

using namespace std;
//���� num1�� num2�� �Ű������� �־��� ��,
//num1�� num2�� ���� ���� 1,000�� ���� �� ���� �κ��� return �ϵ��� soltuion �Լ��� �ϼ����ּ���.
int solution(int num1, int num2)
{
    return ((float)num1 / num2) * 1000;
}