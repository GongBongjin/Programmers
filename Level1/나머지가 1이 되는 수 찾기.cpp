#include <string>
#include <vector>

using namespace std;

/*
�ڿ��� n�� �Ű������� �־����ϴ�. 
n�� x�� ���� �������� 1�� �ǵ��� �ϴ� ���� ���� �ڿ��� x�� return �ϵ��� solution �Լ��� �ϼ����ּ���. 
���� �׻� �������� ����� �� �ֽ��ϴ�.
*/
int solution(int n)
{
    int answer = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 1)
        {
            answer = i;
            break;
        }
    }

    return answer;
}