#include <string>
#include <vector>

using namespace std;
//���� num1�� num2�� �Ű������� �־����ϴ�. 
//�� ���� ������ 1 �ٸ��� -1�� retrun�ϵ��� solution �Լ��� �ϼ����ּ���.
int solution(int num1, int num2)
{
    int answer = 0;

    if (num1 > num2 || num1 < num2)
    {
        answer = -1;
        return answer;
    }
    else
    {
        answer = 1;
        return answer;
    }
}